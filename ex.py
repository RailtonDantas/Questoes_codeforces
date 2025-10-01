import math

t = int(input())

for _ in range(t):
    a = int(input())
    seq = [int(i) for i in input().split()]
    g = 0
    l = 1
    for i in range(a -1,-1,-1):
        g = math.gcd(g,seq[i])
        l = math.lcm(l,seq[i]//g)

    print(l)
