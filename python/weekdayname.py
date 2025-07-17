number = int(input("Enter a number: "))
match number:
    case 1:
        print("Monday")
    case 2:
        print("TuesDAY") 
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
        print("Invalid number,please try again")