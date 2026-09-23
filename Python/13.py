s1 = input("Enter the first string: ")
s2 = input("Enter the second string: ")
p = int(input("Enter the position: "))
s3 = s1[:p] + s2[p] + s1[p+1:]
print(s3)