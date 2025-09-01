from math import gcd
t = int(input())

for _ in range(t):
    a,b,k = [int(i) for i in input().split()]
    gc = gcd(a,b)
    
    if a//gc <= k and b//gc <= k:
        print(1)
    else:
        print(2)

# 4
# 3 5 15
# 2 3 1
# 12 18 8
# 9 7 5
# 1
# 2
# 1
# 2

