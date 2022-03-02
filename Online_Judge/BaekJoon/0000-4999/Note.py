import sys

def dfs(K, arr):
    arr[K] = -2
    for i in range(len(arr)):
        if K == arr[i]:
            dfs(i, arr)

N = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
K = int(sys.stdin.readline())
cnt = 0

dfs(K, arr)

for i in range(N):
    if arr[i] != -2 and i not in arr:
        cnt += 1

print(cnt)