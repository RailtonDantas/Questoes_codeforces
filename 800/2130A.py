t = int(input())
for _  in range(t):
    a = int(input())
    seq = [int(i) for i in input().split()]
    score = seq.count(0) + sum(seq)
    print(score)
