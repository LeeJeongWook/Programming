A = int(input())
B = int(input())
speed = B - A

if speed <= 0:
    print("Congratulations, you are within the speed limit!")
else:
    if speed <= 20:
        print("You are speeding and your fine is $100.")
    elif 20 < speed <= 30:
        print("You are speeding and your fine is $270.")
    elif 30 < speed:
        print("You are speeding and your fine is $500.")
