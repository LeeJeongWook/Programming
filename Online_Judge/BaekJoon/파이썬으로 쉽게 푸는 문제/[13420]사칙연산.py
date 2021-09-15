T = int(input())
for i in range(T):
    list = input().split()

    a = int(list[0])
    b = int(list[2])

    ans = 0
    if list[1] == '+':
        ans = a + b
    elif list[1] == '-':
        ans = a - b
    elif list[1] == '*':
        ans = a * b
    elif list[1] == '/':
        ans = a // b

    if ans == int(list[4]):
        print("correct")
    else:
        print("wrong answer")
