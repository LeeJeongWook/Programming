D, H, M = map(int, input().split())
ans = ((D * 1440) + (H * 60) + M) - 16511

if ans >= 0:
    print(ans)
else:
    print(-1)
