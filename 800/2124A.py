t = int(input())

for _ in range(t):
    a = int(input())
    seq = [int(i) for i in input().split()]
    f = False
    for i in range(a):
        for j in range(a):
            if i < j and seq[i] > seq[j]:
                print("YES")
                print(2)
                print(seq[i],seq[j])
                f = True
                break
        if f:
            break
    
    if not f:
        print("NO")    
    

    
    

# 5 19 2 12 7 10 13
# 2 5 7 10 12 13 19