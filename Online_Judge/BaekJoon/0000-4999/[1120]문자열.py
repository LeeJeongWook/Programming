A, B = input().split()
mincnt = 50

for i in range(len(B) - len(A) + 1):
    cnt = 0
    for j in range(len(A)):
        if A[j] != B[i+j]:
            cnt += 1
    if mincnt > cnt:
        mincnt = cnt
print(mincnt)