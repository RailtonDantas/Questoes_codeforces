t = int(input())

for _ in range(t):
    n = int(input())
    seq = [int(i) for i in input().split()]
    print(min(seq[0],seq[1]) + seq[0])