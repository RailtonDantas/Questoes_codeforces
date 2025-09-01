t = int(input())
for _ in range(t):
    s = input()
    f = False
    for i in range(len(s) - 1):
        if s[i] == s[i + 1]:
            print(1)
            f = True
            break

    if not f:
        print(len(s))

    

