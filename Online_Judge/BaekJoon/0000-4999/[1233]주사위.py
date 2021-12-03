from itertools import product

S1, S2, S3 = map(int, input().split())
S1 = [i + 1 for i in range(S1)]
S2 = [i + 1 for i in range(S2)]
S3 = [i + 1 for i in range(S3)]

comb = list(product(S1, S2, S3))
sums = [sum(comb[i]) for i in range(len(comb))]
check = {}

for i in sums:
    try:
        check[i] += 1
    except:
        check[i] = 1
print(max(check, key=check.get))
