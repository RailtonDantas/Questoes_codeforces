t = int(input())


for _ in range(t):
    a = int(input())
    seq = [int(i) for i in input().split()]
    seq.sort(reverse=True)
    pares = []
    e = 0
    g = a % 2 == 1
    for i in range(0,a,2):
        if g and i == a - 1:
            e += seq[i]
            break
        e += seq[i]
        seq[i + 1] = 0
        seq[i] -= seq[i + 1]
        pares.append((seq[i + 1],seq[i]))
    
    pares.sort()
    for i in range(len(pares) - 1):
        e += max(min(pares[i]),min(pares[i + 1]))
    
    print(e)

# 2 + 3
# 1 2 2 3 5
# 0 1 0 1
# # 4
# # 2 1 5 2