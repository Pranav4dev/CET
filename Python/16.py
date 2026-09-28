a = int(input("Enter 1st number: "))
b = int(input("Enter 2nd number: "))
c,d = a,b
while b!=0: 
    a, b = b, a%b
print("GCD of ",c,"and",d,"is :",a)