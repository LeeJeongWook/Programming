N = int(input())
maximum = 0

for i in range(N):
    sum = 0
    a, b, c = map(int, input().split())
    if a == b == c:
        sum = 10000 + a * 1000
    elif a == b or b == c:
        sum = 1000 + b * 100
    elif a == c:
        sum = 1000 + a * 100
    else:
        sum = max(a, b, c) * 100

    if sum > maximum:
        maximum = sum

print(maximum)
        
