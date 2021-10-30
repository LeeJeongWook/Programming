while 1:
    N = input()

    if N == '0':
        break
    while 1:
        tmp = 0
        for i in N:
            tmp += int(i)
        if tmp < 10:
            print(tmp)
            break
        else:
            N = str(tmp)
