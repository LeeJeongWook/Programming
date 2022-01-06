R, C, N = map(int, input().split())

if R % N != 0:
    R //= N
    R += 1
else:
    R //= N    

if C % N != 0:
    C //= N
    C += 1
else:
    C //= N
print(R * C)