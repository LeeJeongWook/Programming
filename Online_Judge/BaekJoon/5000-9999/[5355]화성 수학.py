T = int(input())

for i in range(0, T):
    L = input().split()
    ans = 0

    for j in range(len(L)):
        if j == 0:
            ans += float(L[j])
        elif L[j] == '@':
            ans *= 3
        elif L[j] == '%':
            ans += 5
        elif L[j] == '#':
            ans -= 7
    print("%0.2f" % ans)
