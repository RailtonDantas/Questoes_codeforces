t = int(input())

for _ in range(t):
    n = int(input())
    s = list(input())

    p = 0
    for i in range(n - 1):
        if s[i] != s[i + 1]:
            p += 1
    if s[0] == '1': p += 1
    print(p)