a,b = input().split()
print(a,b)
idx = len(b) - 1
print(type(idx))
print(idx)

advance = 0
tmp = 0

ans = []

for i in reversed(a):
    i = int(i)

    print(idx, advance)
#     print("idx:", idx, " advence:", advence, "b[idx]:", b[idx], end == "")
    if idx > -1:
        if advance == 1:
            tmp = i + int(b[idx]) + 1
            advance = 0
        else:
            tmp = i + int(b[idx])

    if tmp > 1:
        advance = 1
        tmp -= 2

    print("tmp:", tmp)
    ans.insert(0, tmp)
    idx -= 1

print(ans)
