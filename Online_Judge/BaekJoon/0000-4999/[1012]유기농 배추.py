from collections import deque
import queue

# f = open("input.txt", 'r')
# T = int(f.readline())
T = int(input())

dx = [0, 0, -1, 1]
dy = [1, -1, 0, 0]

def Checkpoint(field, k, l):
    dq = deque()
    dq.append((k, l))
    field[k][l] = 0

    while dq:
        x, y = dq.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or nx >= N or ny < 0 or ny >= M:
                continue
            if field[nx][ny] == 1:
                field[nx][ny] = 0
                dq.append((nx, ny))

for i in range(T):
    cnt = 0
    # M, N, K = map(int, f.readline().split())
    M, N, K = map(int, input().split())
    field = [[0]*M for _ in range(N)]
    for j in range(K):
        # X, Y = map(int, f.readline().split())
        X, Y = map(int, input().split())
        field[Y][X] = 1

    for k in range(N):
        for l in range(M):
            if field[k][l]:
                # for x in range(N):
                #     print(field[x])
                # print()
                Checkpoint(field, k , l)
                cnt += 1
    print(cnt)