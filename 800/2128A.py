t = int(input())

for _ in range(t):
    n,c = [int(i) for i in input().split()]
    seq = [int(i) for i in input().split()]
    seq.sort()
    l,r = 0,n-1
    idx = -1
    coins = 0
    while l <= r:
        meio = (l + r)//2

        if seq[meio] <= c:
            l = meio + 1
            idx = meio
        else:
            r = meio - 1

    if idx == -1:
        print(n)
        continue

    coins = n - (idx + 1)
    subseq = seq[:idx]
    k = 1
    while True:
        f = False
        subseq = list(map(lambda x: 2*x,subseq))
        for i in range(len(subseq) - 1,-1,-1):
            if subseq[i] <= c:
                f = True
                subseq.pop(i)
                break
        if not f:
            break
            
    coins += len(subseq)
    print(coins)
        