import math

D, H, W = map(int, input().split())

X = (D ** 2) / ((H ** 2) + (W ** 2))
x = math.sqrt(X)
h = H * x
w = W * x

print(int(h), int(w))
