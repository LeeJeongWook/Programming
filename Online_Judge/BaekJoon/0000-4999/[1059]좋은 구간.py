L = int(input())
nums = [int(x) for x in input().split()]
n = int(input())

nums.sort()
ans = 0

for i in range(L - 1):
    if nums[i] < n < nums[i+1]:
        tmp = nums[i+1] - n
        for j in range(n - (nums[i]) -1):
            ans += tmp
        ans += nums[i+1] - n - 1
        break

print(ans)
