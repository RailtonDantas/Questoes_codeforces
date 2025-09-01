t = int(input())

for _ in range(t):
    n,m,l,r = [int(i) for i in input().split()]

    if r - m >= 0:
        print(0,m)
    else:
        print(r - m,r)
