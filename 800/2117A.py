t = int(input())

for _ in range(t):
    n,x = [int(i) for i in input().split()]
    seq = [int(i) for i in input().split()]
    f = False
    for i in range(n):
        if seq[i] == 1:
            for j in range(i + x,n):
                if seq[j] == 1:
                    print("NO")
                    f = True
                    break
        if seq[i] == 1:
            break

    if not f:
        print("YES")

            