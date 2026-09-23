import math
a = float(input("Enter the value of a: "))
b = float(input("Enter the value of b: "))
c = float(input("Enter the value of c: "))

d = b**2 - 4*a*c

if d>0:
  root1 = (-b + math.sqrt(d)) / (2*a)
  root2 = (-b - math.sqrt(d)) / (2*a)
  print("Root1: ", root1 , "Root2: ", root2)
else:
  print("There is no real root")