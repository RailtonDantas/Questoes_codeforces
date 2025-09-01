t = int(input())
for _ in range(t):
    num = int(input())
    lista = []
    for i in range(1,18):
        b = 10**i + 1
        if num % b == 0:
            lista.append(f'{num//b}')
    lista.reverse()
    print(len(lista))
    if len(lista) > 0:
        print(' '.join(lista))



# 5
# 1111
# 12
# 55
# 999999999999999999
# 1000000000000000000

# 2
# 11 101
# 0
# 1
# 5
# 3
# 999999999 999000999000999 90909090909090909
# 0
