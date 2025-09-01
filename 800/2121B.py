t = int(input())

for _ in range(t):
    a = int(input())
    b = list(input())
    count = 0   
    f = False
    for i in range(1,a - 1):
        target = b[i]
        b[i] = "#"
        conj = set(b)
        if target in conj:
            count += 1
        b[i] = target

        if count >= 1:
            print("Yes")
            f = True
            break

    if not f:
        print("No")

