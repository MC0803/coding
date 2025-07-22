num1=int(input("Enter first number:"))
num2=int(input("Enter Second number:"))
op = input("Enter operator")

def calc(num1,num2,op):
    sum=num1+num2
    print(sum)
    diff=num1-num2
    print(diff)
    mul=num1*num2
    print(mul)
    div=num1/num2
    print(div)
calc(num1,num2,op)

