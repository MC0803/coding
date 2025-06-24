x = 5           # integer
name = "Alice"  # string
pi = 3.14       # float
is_valid = True # boolean

# if else
age = 18
if age >= 18:
    print("Adult")
elif age > 12:
    print("Teen")
else:
    print("Child")

# for loop
for i in range(5):  # 0 to 4
 print(i)

# while loop
count = 0
while count < 5:
    print(count)
    count += 1

# lists
fruits = ["apple", "banana", "cherry"]
print(fruits[0])  # apple    

# dictionaries
person = {
    "name": "Alice",
    "age": 30,
    "city": "New York"
}

# function definition
def greet(name):
    return "Hello " + name

print(greet("Alice"))