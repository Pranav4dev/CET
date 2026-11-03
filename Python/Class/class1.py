
class student:
    pass

num = int(input("Enter the number of students: "))
s = [None] * num
for i in range(num):
    roll = int(input("Enter roll_no: "))
    name = input("Enter name: ")
    s[i] = student()
    s[i].roll_num = roll
    s[i].name = name

for i in range(num):
    print(s[i].roll_num, s[i].name)
