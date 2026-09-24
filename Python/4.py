while(1):
  print("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit")
  c = int(input("Enter the choice: "))
  match c:
    case 1:
      a = int(input("Enter the 1st value: "))
      b = int(input("Enter the 2nd value: "))
      print("Output: ", a+b)
    case 2:
      a = int(input("Enter the 1st value: "))
      b = int(input("Enter the 2nd value: "))
      print("Output: ", a-b)
    case 3:
      a = int(input("Enter the 1st value: "))
      b = int(input("Enter the 2nd value: "))
      print("Output: ", a*b)
    case 4:
      a = int(input("Enter the 1st value: "))
      b = int(input("Enter the 2nd value: "))
      print("Output: ", a/b)
    case 5:
      print("Exiting.....")
      break
    case _:
      print("Enter a valid option!!!")