N = int(input())

vote = input()

acnt = 0
bcnt = 0

for i in vote:
    if i == 'A':
        acnt += 1
    elif i == 'B':
        bcnt += 1
if acnt > bcnt:
    print('A')
elif acnt < bcnt:
    print('B')
else:
    print('Tie')
