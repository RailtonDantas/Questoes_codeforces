t = int(input())

for _ in range(t):
    a = [int(i) for i in list(input())]
    a.sort()
    print(a[0])