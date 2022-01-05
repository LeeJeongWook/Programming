N, A, B = map(int, input().split())

cnt = 0

while 1:
    cnt += 1
    if A % 2 == 1:
        A += 1
    if B % 2 == 1:
        B += 1
    A //= 2
    B //= 2
    if A == B:
        break
print(cnt)