num = int(input())

i = 0
a = 0
cnt = 0

while num >= a:
    i += 1
    a += i
    cnt += 1

print(cnt-1)
