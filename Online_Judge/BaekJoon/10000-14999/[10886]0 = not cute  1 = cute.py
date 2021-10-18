N = int(input())
acnt = 0
bcnt = 0

for i in range(N):
    vote = int(input())

    if vote == 1:
        acnt += 1
    elif vote == 0:
        bcnt += 1

if acnt > bcnt:
    print("Junhee is cute!")
elif acnt < bcnt:
    print("Junhee is not cute!")
        
