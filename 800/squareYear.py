t = int(input())

for _ in range(t):
    a = int(input())
    r,l = 0,0
    while r <= a**0.5:
        f = False
        while l <= a**0.5:
            if (r + l)**2 == a :
                print(r,l)
                f = True
                break
            l += 1
        if f:
            break
        r += 1
    if not f:
        print(-1)

