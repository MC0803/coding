import random

randomnumber = random.randrange(1,100);
print("Welcome to the Guessing Game!")
print("Select a number between 1 and 100.")

count = 0
guessednumber = int(input("Enter your guess: "))
while guessednumber != randomnumber:
    count += 1
    if guessednumber < randomnumber:
        print("You guessed too low!")
    elif guessednumber > randomnumber:
        print("you guessed to high!")       
    guessednumber = int(input("Enter your guess: "))

    
print("took you ",count,"tries to guess the number")
