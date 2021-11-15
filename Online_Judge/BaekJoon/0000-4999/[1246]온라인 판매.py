N, M = map(int, input().split())

P = [int(input()) for _ in range(M)]
P.sort()
price, ans = 0, 0

for i in range(M):
    mymax = min(M-i, N)
    if ans < P[i] * mymax:
        price = P[i]
        ans = P[i] * mymax

print(price, ans)
