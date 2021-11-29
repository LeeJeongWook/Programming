N, m, M, T, R = map(int, input().split())

time = 0
X = m

if m + T > M:
    print(-1)
else:
    while True:
        time += 1

        if X + T > M:
            X -= R
            if X < m:
                X = m
        else:
            X += T
            N -= 1

        if N == 0:
            break
    print(time)
