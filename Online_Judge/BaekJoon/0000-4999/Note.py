import sys
from itertools import combinations

N = int(sys.stdin.readline())

ans = 0
nums = list()

for i in range(1, 11):
    for comb in combinations(range(0,10), i):
        comb = list(comb)
        comb.sort(reverse=True)
        nums.append(int("".join(map(str, comb))))

nums.sort()
try:
    print(nums[N])
except:
    print(-1)