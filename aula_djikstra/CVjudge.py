from math import inf
from heapq import heapify as hpify,heappop as hpop,heappush as hpush
n,m,a,b = [int(i) for i in input().split()]
def djikstra(graph,vi,vd):
    prede = [-1]*(n)
    lista = []
    hpify(lista)
    hpush(lista,(0,vi))

    while lista:
        d,v = hpop(lista)

        if dist[v] < d:continue
        dist[v] = d

        # if v == vd:
        #     return prede

        for d1,v1 in graph[v]:
            w = d + d1
            if w < dist[v1]:
                dist[v1] = w
                prede[v1] = v
                hpush(lista,(w,v1))
    return prede


dist = [inf]*(n)
matriz = [[] for i in range(n)]
for i in range(m):
    x,y,w = [int(i) for i in input().split()]
    matriz[x].append((w,y))


prede = djikstra(matriz,a,b)
distancia = dist[b]
resp = []
i = b
while True:
    if i == -1:
        break
    resp.append(i)
    i = prede[i]

if a not in resp:
    print(-1)
    exit()
print(distancia,len(resp) - 1)
for j in range(len(resp) -1,0,-1):
    print(resp[j],resp[j - 1])

