from math import gcd

def lcm(x, y):
    return x * y // gcd(a,b)

T = int(input())

for i in range(0,T):
    a, b = map(int, input().split())
    print(lcm(a,b))
