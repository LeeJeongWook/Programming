idx = ['A', 'G', 'C', 'T']
table = [['A', 'C', 'A', 'G'], ['C', 'G', 'T', 'A'], ['A', 'T', 'C', 'G'], ['G', 'A', 'G', 'T']]

N = int(input())
string = input()

while True:
    if len(string) == 1:
        break
    tmp = table[idx.index(string[-1])][idx.index(string[-2])]
    string = string[:-2]
    string += tmp

print(string)