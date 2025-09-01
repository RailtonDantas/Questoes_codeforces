t = int(input())

for _ in range(t):
    a,b,c,d = [int(i) for i in input().split()]
    p = 0
    if a >= c and b > d: p += 1
    if b >= d and a > c: p += 1

    if a >= d and b > c: p += 1
    if b >= c and a > d: p += 1

    
    print(p)
