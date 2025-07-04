number1 = int(input("Enter first number:"))
number2 = int(input("Enter second number: "))
print("Before swap: "+ str(number1) + " "+str(number2))
temp = number1
number1=number2
number2=temp
print("After swap: "+ str(number1) + " "+str(number2))