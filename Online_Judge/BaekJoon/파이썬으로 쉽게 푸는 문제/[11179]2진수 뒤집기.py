def solution(n):
    list = []
    while n > 0:
        tmp = n % 2
        list.append(tmp)
        n //= 2

    ans = 0
    amount = 1
    for i in reversed(list):
        ans += i * amount
        amount *= 2
    print(ans, end = '')

num = int(input())
solution(num)
