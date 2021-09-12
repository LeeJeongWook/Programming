N = input()
l1 = list(map(int, input().split()))
M = input()
l2 = list(map(int, input().split()))

for i in l2:
    if i in l1:
        print(1)
    else:
        print(0)
