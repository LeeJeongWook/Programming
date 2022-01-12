table = {"AA":'A', "AG":'C', "AC":'A', "AT":'G',
         "GA":'C', "GG":'G', "GC":'T', "GT":'A',
         "CA":'A', "CG":'T', "CC":'C', "CT":'G',
         "TA":'G', "TG":'A', "TC":'G', "TT":'T'}

N = int(input())
DNA = list(input().rstrip())

while len(DNA) > 1:
    a = DNA.pop()
    b = DNA.pop()
    DNA.append(table[a+b])
print(DNA.pop())

'''
# 시간 초과

idx = ['A', 'G', 'C', 'T']
table = [['A', 'C', 'A', 'G'],
         ['C', 'G', 'T', 'A'],
         ['A', 'T', 'C', 'G'],
         ['G', 'A', 'G', 'T']]

N = int(input())
string = input()

while True:
    if len(string) == 1:
        break
    tmp = table[idx.index(string[-1])][idx.index(string[-2])]
    string = string[:-2]
    string += tmp

print(string)
'''