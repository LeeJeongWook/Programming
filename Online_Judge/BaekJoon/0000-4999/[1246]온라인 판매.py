N, M = map(int, input().split())

P = [int(input()) for _ in range(M)]
P.sort(reverse = True)

max = 0
num = int(len(P))
for i in reversed(P):
    if max < (i * num):
        max = i * num
        cost = i
    num -= 1
print (cost, cost * (P.index(cost) + 1))
