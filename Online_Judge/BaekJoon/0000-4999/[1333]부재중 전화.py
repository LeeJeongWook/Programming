N, L, D = map(int, input().split())
check = [0] * (N * L + 5 * (N - 1))
for i in range(N):
    s = (L + 5) * i
    for j in range(s, s+L):
        check[j] = 1
ans = 0
while ans < len(check):
    if not check[ans]:
        break
    ans += D
print(ans)