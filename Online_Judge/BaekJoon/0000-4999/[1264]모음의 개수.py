vowel = ('A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u')

while True:
    cnt = 0
    string = input()
    if string == '#':
        break
    for i in string:
        if i in vowel:
            cnt += 1
    print(cnt)