t = int(input())
for _ in range(t):
    seq = [int(i) for i in input().split()]
    seq2 = [int(i) for i in input().split()]
    maior = max(seq2)
    player = seq[1]
    if maior == seq2[player - 1] or seq[2] != 1:
        print('YES')
    else:
        print('NO')

    
        
