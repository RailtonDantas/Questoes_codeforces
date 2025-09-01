t = int(input())

for _ in range(t):
    a,b = [int(i) for i in input().split()]

    if a + b <= 4 or a == 1 or b == 1:
        print("No")
    else:
        print("Yes")