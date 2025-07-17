number1 = int(input("Enter 1 number: "))
number2 = int(input("Enter 2 number: "))
number3 = int(input("Enter 3 number: "))

if number1>number2:
    if number1>number3:
        print("Largest is number1",number1)
    else:
        print("Larget is number3",number3)
elif number2>number3:
    print("Largest is number2",number2)
else:
    print("Largest is number3",number3)