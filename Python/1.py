while(1):
  print("\n")
  print("1. Area \n2. Perimeter \n3. Exit")
  c = int(input("Enter the choice: "))
  match c:
    case 1:
      r = int(input("Enter value of radius: "))
      print("Area: ", 3.14*(r * r))
    case 2:
      r = int(input("Enter value of radius: "))
      print("Perimeter: ", 2*3.14*r)
    case 3:
      print("Exiting.....")
      break
    case _:
      print("Enter a valid option!!!")    
      jsdn