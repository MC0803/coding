number1=int(input("Enter first number: "))
number2=int(input("Enter second number: "))
operation=input("Enter operation (+, -, *, /): ")

if operation == '+':
    result = number1 + number2
    print(f"The result of {number1} + {number2} is: {result}")
elif operation == '-':
    result = number1 - number2
    print(f"The result of {number1} - {number2} is: {result}")
elif operation == '*':
    result = number1 * number2
    print(f"The result of {number1} * {number2} is: {result}")
elif operation == '/':
    result = number1 - number2
    print(f"The result of {number1} / {number2} is: {result}")