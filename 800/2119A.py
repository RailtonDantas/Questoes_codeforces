from math import ceil,floor

t = int(input())
for _ in range(t):
    a,b,x,y = [int(i) for i in input().split()]

    if a % 2 == 1 and a - b == 1:
        print(y)
        continue
    if a > b:
        print(-1)
        continue

    dif = b - a
    out = 0
    if a % 2 == 0:
        out = min(x,y)*ceil(dif/2) + floor(dif/2)*x
    else:
        out = ceil(dif/2)*x + floor(dif/2)*min(x,y)

    print(out)
