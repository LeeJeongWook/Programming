X, Y = map(int, input().split())
Z = (Y * 100) // X

if Z >= 99:
    answer = -1

else:
    answer = 0
    left = 0
    right = X
    
    while left <= right:
        idx = (left + right) // 2
        if ((Y + idx) * 100) // (X + idx) <= Z:
            left = idx + 1
        else:
            answer = idx
            right = idx - 1
print(answer)