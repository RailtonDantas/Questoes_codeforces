t = int(input())

for _ in range(t):
    k,x = [int(i) for i in input().split()]
    print(x*(2**k))