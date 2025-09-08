t = int(input())

horarios = []
for _ in range(t):
    a,b = (int(i) for i in input().split())
    horarios.append((b,a))

horarios.sort()
c = 0
at = 0
for i in range(t):
    if at <= horarios[i][1]:
        c += 1
        at = horarios[i][0]

print(c)


#
# 1 4
# 2 3
# 4 6
# 5 6




