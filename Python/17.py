a = input("Enter the list with ',' separation: ")
l = a.split(',')
l2 = []
for i in l:
    if int(i)%2!= 0:
        l2.append(i)
print(l2)