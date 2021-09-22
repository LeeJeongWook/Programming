a,b = input().split()
print(a,b)
idx = len(b) - 1
print(type(idx))
print(idx)

ans = []
advance = 0
tmp = 0

for i in reversed(a):
    i = int(i)
    b[idx] = int(b[idx])

    if idx > -1:
        if advance == 1:
            tmp = i + b[idx] + 1
        else:
            tmp = i + b[idx]

    if tmp > 1:
        advance = 1
        tmp -= 2
    print("tmp:", tmp)
    ans.insert(0, tmp)
    idx -= 1

print(ans)
