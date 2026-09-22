a = input("Enter a string: ")
l= ["a", "e", "i", "o", "u","A", "E", "I", "O", "U"]
c = 0
for i in a:
    if i in l:
        print(i)
        c = c+1
print("Number of vowels:", c)