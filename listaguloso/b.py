n = int(input())

seq = [int(i) for i in input().split()]
m1 = 0
m2 = 0

for i in seq:
    if m1 < m2:
        m1 += i
    else:
        m2 += i
print(abs(m1 - m2))