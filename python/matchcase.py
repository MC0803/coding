number = int(input("Enter a number between 1 and 7 :"))

match number:
    case 1:
        print("Monday")
    case 2: 
        print("Tuesday")
    case 3:
        print("Wednesday")
    case 4: 
        print("Thursday")
    case 5:
        print("Friday")
    case 6:
        print("Saturday")
    case 7:
        print("Sunday") 
    case _:
        print("Invalid number, please enter a number between 1 and 7.")
# The underscore (_) acts as a wildcard, matching any value not caught by the previous cases.    

