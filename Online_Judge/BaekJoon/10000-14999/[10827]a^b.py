from decimal import Decimal, getcontext

getcontext().prec = 10

a, b = input().split(' ')
print("{:f}".format(Decimal(a) ** int(b)))
