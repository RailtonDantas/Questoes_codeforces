t = int(input())

for _ in range(t):
    a,b = [int(i) for i in input().split()]
    seq = [int(i) for i in input().split()]
    dif1 = b - seq[0]
    dif2 = b - seq[-1]
    if dif1 > 0 and dif2 > 0:
        print(max(dif1,dif2))
        continue
    if dif1 < 0 and dif2 < 0:
        print(abs(min(dif1,dif2)))
        continue
    
    dif1 = abs(dif1)
    dif2 = abs(dif2)
    minimo = min(dif1,dif2)
    
    print(minimo*2 + ((dif1 + dif2) - minimo))
