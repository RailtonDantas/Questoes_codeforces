t = int(input())

for _ in range(t):
    n,c = [int(i) for i in input().split()]
    seq = [int(i) for i in input().split()]
    seq.sort(reverse=True)
    k = 0
    for x in seq:
        if x * (2**k) <= c:
            k += 1
    print(n - k)
    
        