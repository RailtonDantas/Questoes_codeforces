t = int(input())
for _ in range(t):
    n = int(input())
    mods = [0,0,0,0]
    for i in range(n):
        mods[i % 4] += 1
    if mods[0] == mods[3] and mods[1] == mods[2]:
        print("Bob")
    else:
        print("Alice")
        

