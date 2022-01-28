A, B = map(list, input().split())
min = 50
count = 0
# A = sorted(A)
# B = sorted(B)
# print(A-B)

for i in A:
    if i in B:
        A.remove(i)
        B.remove(i)
        print(A)
        print(B)
        count += 1
print(count)
