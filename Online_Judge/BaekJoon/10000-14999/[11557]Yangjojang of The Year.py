T = int(input())

for i in range(T):
    N = int(input())
    maximum = int(0)
    for j in range(N):
        S, L = input().split()
        L = int(L)
        if L > maximum:
            maximum = L
            school = S
    print(school)
        
