dishes = input()

flag = 0

height = 0

for i in dishes:
    if i == flag:
        height += 5
    else:
        height += 10
        flag = i
print(height)
