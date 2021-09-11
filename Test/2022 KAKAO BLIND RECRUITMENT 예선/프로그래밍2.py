import math

def prime(a):
    for i in range(2, int(math.sqrt(a)) + 1):
        if a % i == 0:
            return False
    return True

def solution(n, k):
    answer = 0
    convert = 0
    reversed_convert = []

    amount = 1
    while n > 0:
        convert += n % k * amount
        n //= k
        amount *= 10

    convert = str(convert)

    list = []
    list = convert.split('0')
    for i in list:
        if i != '':
            i = int(i)
            if(i == 1):
                continue
            elif(i == 2):
                answer += 1
            else:
                if prime(i):
                    answer += 1


    return answer
