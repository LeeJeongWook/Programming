A, B = input().split()
cnt = 0
max = 0
if len(A) != len(B):

    for i in range(len(A)):
        tmp = 0
        idx = i
        for j in range(len(B)):
            if A[idx] == B[j-1]:
                idx += 1
                tmp += 1
else:
    for i in range(len(A)):
        if A[i-1] != B[i-1]:
            cnt += 1
print(cnt)
