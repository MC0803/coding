#lambda== function jo ek line me ho ja rha hai
#lambda arguments:expression

#Define
add = lambda x,y:x+y
#usage
result1=add(5,3)
print("The sum is :",result1)

#eg2
sq=lambda x:x**2
result2=sq(result1)
print("Square is",result2)

#checking even eg3
even = lambda x:x%2==0
result=even(result2)
print(result)

#eg 4
num=[1,2,3,4,5,6,7,8,9]
print(num)
square_nums=list(map(lambda x:x**2,num))
print(square_nums)