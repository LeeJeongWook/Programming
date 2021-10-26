from math import factorial

N = int(input())
tmp = str(factorial(N))
cnt = int(0)
for i in reversed(tmp):
    if i != '0':
        print(cnt)
        break
    cnt += 1
