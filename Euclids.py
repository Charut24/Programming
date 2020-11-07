a=0
b=0
def GCD(a,b):
    if(a==0):
        return b
    return GCD(b%a,a)

#driver code
a=int(input("Enter the first number: "))
b=int(input("Enter the second number: "))

print("GCD (",a," , ",b," ) = ",GCD(a,b))
