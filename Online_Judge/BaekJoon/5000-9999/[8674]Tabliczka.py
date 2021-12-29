a, b = map(int, input().split())
tmp = 0
if b > a:
    tmp = a
    a = b
    b = tmp

if a % 2 and b % 2:
    print(b)
else:
    print(0)
