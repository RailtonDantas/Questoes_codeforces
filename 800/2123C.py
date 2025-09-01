t = int(input())

for _ in range(t):

    n = int(input())
    a = [0,* [int(i) for i in input().split()]] 

    pre = [float('inf')] * (n + 1)
    suf = [float('-inf')] * (n + 2)

    for i in range(1, n + 1):
        pre[i] = min(pre[i - 1], a[i])

   
    for i in range(n, 0, -1):
        suf[i] = max(suf[i + 1], a[i])

    res = []
    for i in range(1, n + 1):
        if a[i] == pre[i] or a[i] == suf[i]:
            res.append("1")
        else:
            res.append("0")

    print("".join(res))

