print('STABLE MARRIAGE PROBLEM\n')
# Number of Men or Women 
N = 4
# Input Parameters
men = {0:['c', 'b', 'd', 'a'], 
       1:['b', 'a', 'c', 'd'], 
       2:['c', 'a', 'd', 'b'], 
       3:['c', 'a', 'd', 'b']}
women = {'a':[0, 1, 3, 2], 
         'b':[2, 0, 3, 1], 
         'c':[2, 1, 3, 0], 
         'd':[1, 0, 2, 3]}

print('\tPREFERENCE TABLE\nMEN\t\tWOMEN')
for i in men:
    print('{}: {} {} {} {}\t{}: {} {} {} {}'.format(i, men[i][0], men[i][1], men[i][2], men[i][3], 
                                                    chr(i+97), women[chr(i+97)][0], women[chr(i+97)][1], women[chr(i+97)][2], women[chr(i+97)][3]))
print('')

#Convertion of input parameters for computation
prefer = [[(ord(men[0][0])-(97-N)), (ord(men[0][1])-(97-N)), (ord(men[0][2])-(97-N)), (ord(men[0][3])-(97-N))],
          [(ord(men[1][0])-(97-N)), (ord(men[1][1])-(97-N)), (ord(men[1][2])-(97-N)), (ord(men[1][3])-(97-N))],
          [(ord(men[2][0])-(97-N)), (ord(men[2][1])-(97-N)), (ord(men[2][2])-(97-N)), (ord(men[2][3])-(97-N))],
          [(ord(men[3][0])-(97-N)), (ord(men[3][1])-(97-N)), (ord(men[3][2])-(97-N)), (ord(men[3][3])-(97-N))],
          [women['a'][0], women['a'][1], women['a'][2], women['a'][3]],
          [women['b'][0], women['b'][1], women['b'][2], women['b'][3]],
          [women['c'][0], women['c'][1], women['c'][2], women['c'][3]],
          [women['d'][0], women['d'][1], women['d'][2], women['d'][3]]]

# This function returns true if woman 'w' prefers man 'm1' over man 'm'
def reconsideration(prefer, w, m, m1): 
    # Check if w prefers m over her current engagment m1 
    for i in range(N): 
        # If m1 comes before m in lisr of w, then w prefers her current engagement 
        if (prefer[w][i] == m1): 
            return True
        # If m comes before m1 in w's list, then free her current engagement and engage her with m 
        if (prefer[w][i] == m): 
            return False
  
# Prints stable matching for N men and women.  
# men are numbered as 0 to N-1 using ASCII for computation.  
# women are numbereed as N to 2N-1 using ASCII for computation. 
def satble_marriage(prefer):       
    # Stores partner of women. This is our output array that stores paing information.  
    # The value of w_partner[i] indicates the partner assigned to woman N+i.
    # Note that the woman numbers between N and 2*N-1.
    # The value -1 indicates that (N+i)'th woman is free 
    w_partner = [-1 for i in range(N)] 
  
    # An array to store availability of men.  
    # If m_status[i] is false, then man 'i' is free, otherwise engaged. 
    m_status = [False for i in range(N)] 
  
    m_single = N 
  
    # While there are free men 
    while (m_single > 0):
        # Pick the first free man 
        m = 0
        while (m < N): 
            if (m_status[m] == False): 
                break
            m += 1
  
        # One by one go to all women according to m's preferences.
        # Here m is the picked free man 
        i = 0
        while i < N and m_status[m] == False:
            w = prefer[m][i] 
  
            # The woman of preference is free, w and m become partners (Note that the partnership maybe changed later).  
            # So we can say they are engaged not married
            if (w_partner[w - N] == -1): 
                w_partner[w - N] = m 
                m_status[m] = True
                m_single -= 1
  
            else:
                # If w is not free, find current engagement of w 
                m1 = w_partner[w - N] 
  
                # If w prefers m over her current engagement m1, then break the engagement between w and m1, and engage m with w. 
                if (reconsideration(prefer, w, m, m1) == False): 
                    w_partner[w - N] = m 
                    m_status[m] = True
                    m_status[m1] = False
            i += 1
  
    # Print the solution 
    print("SOLUTION:\nMan\tWoman")
    for i in range(N): 
        print(w_partner[i], "\t", chr(97+i))

satble_marriage(prefer)
