
T = int(input())
for _ in range(T):
    a = int(input())
    seq = [int(i) for i in input().split()]
    resp = []

    for i in seq:
        resp.append(a + 1 - i)

    print(*resp)


