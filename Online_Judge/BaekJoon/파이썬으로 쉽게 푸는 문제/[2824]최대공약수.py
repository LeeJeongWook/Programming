import math

N = input()
l1 = list(map(int, input().split()))
M = input()
l2 = list(map(int, input().split()))

sum1 = 1
sum2 = 1

for i in l1:
    sum1 *= i
for i in l2:
    sum2 *= i

print(str(math.gcd(sum1, sum2))[-9:])
