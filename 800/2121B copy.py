t = int(input())

for _ in range(t):
    a = int(input())
    b = input()
    dic = {}
    f = False
    for i in b:
        dic[i] = dic.get(i,0) + 1
        if dic[i] == 3 or (dic[i] == 2 and (i != b[0] or i != b[-1])):
            print('Yes')
            f = True
            break
    if not f:
        print("No")