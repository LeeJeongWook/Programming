def solution(s):
    answer = True

    pcnt = 0
    ycnt = 0

    for i in s:
        if i == 'p' or i == 'P':
            pcnt += 1
        if i == 'y' or i == 'Y':
            ycnt += 1

    if pcnt == ycnt:
        answer = True
    else:
        answer = False

    return answer
