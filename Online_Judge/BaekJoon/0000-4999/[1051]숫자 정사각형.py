N, M = map(int, input().split())

arr = []
ans = 0
maximum = min(N,M) ** 2

for n in range(N):
    arr.append(list(input()))

for i in range(N):
    for j in range(M):
        for k in range(min(N,M)):
            if i+k<N and j+k<M and arr[i][j] == arr[i+k][j] == arr[i][j+k] == arr[i+k][j+k]:
                ans = max(ans, (k+1)**2)
        if ans == maximum:
            break
print(ans)