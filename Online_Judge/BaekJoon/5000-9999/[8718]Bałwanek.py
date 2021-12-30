x, k = map(int, input().split())

x *= 1000
k *= 1000

if (k * 7) <= x:
    print(int(k * 7))
elif (k * 3.5) <= x:
    print(int(k * 3.5))
elif (k * 1.75) <= x:
    print(int(k * 1.75))
else:
    print(0)
