import sys
import math
from itertools import combinations

def VerifyTriangle(comb):
    flag = False
    triangle = []
    triangle.append(pow(int(comb[0][0]) - int(comb[1][0]), 2) + pow(int(comb[0][1]) - int(comb[1][1]), 2))
    triangle.append(pow(int(comb[1][0]) - int(comb[2][0]), 2) + pow(int(comb[1][1]) - int(comb[2][1]), 2))
    triangle.append(pow(int(comb[0][0]) - int(comb[2][0]), 2) + pow(int(comb[0][1]) - int(comb[2][1]), 2))
    triangle.sort()

    if triangle[0] + triangle[1] == triangle[2]:
        flag = True

    return flag

# N = int(sys.stdin.readline())
# x = list(sys.stdin.readline().split() for i in range(N))

f = open("0000-4999\input.txt", "r")
N = int(f.readline())
x = list(f.readline().split() for i in range(N))

count = 0

combination = list(combinations(x, 3))
for i in combination:
    if(VerifyTriangle(i)): count += 1

print(count)
