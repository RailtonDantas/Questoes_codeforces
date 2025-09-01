t = int(input())

for _ in range(t):
    a = int(input())
    d = [int(i) for i in input().split()]
    if len(set(d)) < a:
        print("YES")
    else:
        print("NO")
