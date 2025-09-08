import math
t = int(input())

for _ in range(t):
    a,b = [int(i) for i in input().split()]
    if b == 1:
        if a % 2 == 0:
            print(-1)
        else:
            print(a + 1)
        continue
    
    r = b % 2
    if r == 1 and a % 2 == 1:
        print(a*b + 1)
        continue

    g = math.gcd(b,b//2 - r)
    out = a*g + (b//g)
    if out % 2 == 1:
        print(-1)
        continue

    print(out)

# 7
# 8 1
# 1 8
# 7 7
# 2 6
# 9 16
# 1 6
# 4 6


# -1
# 6
# 50
# 8
# 74
# -1
# 14

        