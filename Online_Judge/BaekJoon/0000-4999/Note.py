# 백준 1068번

import sys
from tkinter.tix import Tree

f = open("0000-4999\input.txt", "r")

N = int(f.readline())
tree = list(map(int, f.readline().rstrip().split(' ')))
node_idx = int(f.readline())

print("=======================")
print(N)
print(tree)
print(node_idx)
print("=======================")
print(tree[node_idx])

idx_list = list()

idx = 0
for i in tree:
    print("i:",i)
    if node_idx == i:
        idx_list.append(idx)
    idx += 1

print(idx_list)