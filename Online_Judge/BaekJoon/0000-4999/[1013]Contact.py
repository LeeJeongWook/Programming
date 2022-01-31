import sys, re

T = int(sys.stdin.readline())

for _ in range(T):
    string = sys.stdin.readline().replace('\n','')
    
    tmp = re.compile('(100+1+|01)+')
    result = tmp.fullmatch(string)

    if result:
        print("YES")
    else:
        print("NO")