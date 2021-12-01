A, B = input().split()
ans = sum = 0
for i in B:
    sum += int(i)

for j in A:
    ans += int(j) * sum
print(ans)
