t = int(input())

for _ in range(t):
    a = int(input())
    print(*[1,*list(range(a,1,-1))])