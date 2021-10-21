while(1):
    n = int(input())
    sum = int(0)
    l = []

    if n == -1:
        break;
    for i in range(n):
        if n % (i + 1) == 0:
            l.append(i + 1)

    for j in range(len(l) - 1):
        sum += l[j]

    if sum == n:
        print(n,'= ', end = '')
        for k in range(len(l) - 1):
            if k == len(l) - 2:
                print(l[k])
            else:
                print(l[k],'+ ', end = '')

    else:
        print(n, "is NOT perfect.")
