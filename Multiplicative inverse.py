a=0
b=0
def Mod_Inverse(a,b):
    b= b%a
    for x in range(1,a):
        if((b*x)%a == 1):
            return x

#driver code
n=1
while(n==1):
    a=int(input("Enter value of a(which will be with mod): "))
    b=int(input("Enter value of b: "))
    print(b," (mod ",a,")")
    print("Multiplicative inverse: ",Mod_Inverse(a,b))
    n=int(input("Enter 1 to continue and 0 to exit: "))
