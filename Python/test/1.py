a=int(input("enter a number:"))
rev=0
dig=a
while dig!=0:
    rev=rev*10+dig%10
    print(rev)
    dig=dig//10

print(rev)
if a==rev:
    print("given number",a,"is a palindrome")
else:
    print("given number",a,"is not a palindrome")