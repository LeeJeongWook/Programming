L = int(input())
nums = sorted(list(map(int, input().split())))
n = int(input())
nums = [0] + nums
start = 0

if n in nums:
    print(0)
else:
    for i in nums:
        if n > i:
            start = i + 1
        else:
            end = i - 1
            break
    print(end - start + (end - n) * (n - start))
