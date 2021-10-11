A = []
B = []

for i in range(3):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)

for j in A:
    if A.count(j) == 1:
        x = j

for k in B:
    if B.count(k) == 1:
        y = k

print(x, y)
