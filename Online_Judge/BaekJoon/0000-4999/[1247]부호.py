from sys import stdin

for i in range(3):
    N = int(stdin.readline())
    tmp = 0
    for j in range(N):
        tmp += int(stdin.readline())
    if 0 < tmp:
        print("+")
    elif tmp < 0:
        print("-")
    elif tmp == 0:
        print(0)


'''
# 시간 초과
for i in range(3):
    N = int(input())
    tmp = 0
    for j in range(N):
        tmp += int(input())
    if 0 < tmp:
        print("+")
    elif tmp < 0:
        print("-")
    elif tmp == 0:
        print(0)
'''