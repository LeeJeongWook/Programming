import sys

f = open("0000-4999\input.txt")
N = int(f.readline())
M = int(f.readline())
broken_button = list(map(int, f.readline().split()))

print(N)
print(M)
print(broken_button)
