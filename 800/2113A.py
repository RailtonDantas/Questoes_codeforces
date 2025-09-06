t = int(input())

def solve(k,a,b,x,y):

    p = max((k-a)//x + 1,0)
    k -= p*x
    p += max((k - b)//y + 1,0)

    return max(p,0)

for _ in range(t):
    k,a,b,x,y = [int(i) for i in input().split()]
    

    print(max(solve(k,a,b,x,y),solve(k,b,a,y,x)))

# 5
# 10 3 4 2 1
# 1 10 10 1 1
# 100 17 5 2 3
# 28 14 5 2 4
# 277 5 14 1 3
# 8
# 0
# 46
# 10
# 273


