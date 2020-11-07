n=0
m=0
Place=0
choice=0
y=0

import math

print("Select from the folllowing: ")
print("1. Find n(the number of pigeons)")
print("2. Find m(the number of pigeonholes)")
print("3. Find at least one pigeon is contained in a pigeonhole")
choice=int(input("Enter your choice: "))
if(choice==1):
    m=float(input("Enter m (number of pigeonholes): "))
    Place=float(input("Enter the value: "))

    n = ((Place-1) * m) + 1
    print("Value of n= ",math.floor(n))
elif(choice==2):
    n=float(input("Ënter n (number of pegions): "))
    Place=float(input("Enter the value: "))

    m = (n-1)/(Place-1)
    print("Value of m= ",math.floor(m))
else:
    n=float(input("Enter n (the number of pigeons): "))
    m=float(input("Enter m (the number of pigeonholes): "))

    Place= ((n-1) / m ) +1
    print("Value is: ",math.floor(Place))
