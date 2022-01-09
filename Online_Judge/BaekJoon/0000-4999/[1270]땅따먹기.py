T = int(input())

for i in range(T):
    tmp = list(map(int, input().split()))
    n = tmp[0]
    a = tmp[1:]
    b = {}
    flag = True
    
    for j in a:
        try:
            b[j] += 1
            if(b[j] > n/2):
                print(j)
                flag = False
                break
        except:
            b[j] = 1
    if flag:
        print("SYJKGW")

'''
# 시간 초과

T = int(input())

for i in range(T):
    tmp = list(map(int, input().split()))

    settmp = set(tmp)
    n = int(tmp[0])
    ans = flag = 0

    if n % 2:
        half = (n // 2) + 1
    else:
        half = n // 2
    
    for j in settmp:
        if tmp[1:].count(j) >= half:
            ans = j
            if flag == 1:
                ans = 0
            else:
                flag = 1

    if ans == 0:
        print("SYJKGW")
    else:
        print(ans)
'''