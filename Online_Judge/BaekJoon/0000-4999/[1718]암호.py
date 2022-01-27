string = input()
key = input()
idx = 0

for i in string:
    if len(key) == idx:
        idx = 0
    if i == ' ':
        print(' ', end='')
    else:
        if ord(i) - ord(key[idx]) <= 0:
            print(chr(122 + (ord(i) - ord(key[idx]))), end = '')
        else:
            print(chr(ord(i)-ord(key[idx]) + 96), end='')
    idx += 1