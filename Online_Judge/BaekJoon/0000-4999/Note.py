import math

# 입력 받기
str = input()

# 문자열 공백 단위로 짜르기
splited = str.split(" ")

# 벡터 a, b 선언
a = (float(splited[0]), float(splited[1]))
b = (float(splited[2]), float(splited[2]))

# |v| = (벡터의 크기) 구하기
def dist(v):
    return math.sqrt(v[0]**2 + v[1]**2)

def innerProduct(v1, v2):
    # 벡터 v1, v2의 크기 구하기
    distA = dist(v1)
    distB = dist(v2)

    # 내적 1 (x1x2 + y1y2)
    ip = a[0] * b[0] + a[1] * b[1]

    # 내적 2 (|v1|*|v2|*cos x)
    ip2 = distA * distB

    # cos x값 구하기
    cost = ip / ip2

    print("cos x: %10.3f" % cost)

    # x값(라디안) 구하기 (cos 역함수)
    x = math.acos(cost)
    print("x (radians): %10.3f" % x)            

    # x값을 x도로 변환하기
    degX = math.degrees(x)
    print("x (degrees): %10.3f" % degX)
    return (ip, degX)

innerProduct(a, b)