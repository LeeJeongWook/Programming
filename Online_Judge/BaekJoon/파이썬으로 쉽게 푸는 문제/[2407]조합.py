def solution(N, M):
    ans = 1
    cnt = 0
    amount = 1;
    for i in range(N, N-M, -1):
        cnt += 1
        amount *= cnt
        ans *= i
    ans //= amount
    print(ans)


n, m = input().split()
n = int(n)
m = int(m)
solution(n, m)
