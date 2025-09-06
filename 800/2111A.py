t = int(input())

for _ in range(t):
    x = int(input())
    actions = 0
    lista = [0,0,0]

    while min(lista) < x:
        lista.sort()
        lista[0] = lista[1]*2 + 1
        actions += 1
        
    print(actions)
    
    

# 7
# 1
# 5
# 14
# 2025
# 31415
# 536870910
# 1000000000

# 3
# 7
# 9
# 23
# 31
# 59
# 61

    