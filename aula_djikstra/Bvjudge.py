import heapq
import math
def djikstra(graph,v):
    lista = []
    heapq.heapify(lista)
    heapq.heappush(lista,(0,v))
    while lista:
        d,u = heapq.heappop(lista)
        if dist[u] < d: continue
        dist[u] = d
        for du,u1 in graph[u]:
            w = d + du
            if w < dist[u1]:
                dist[u1] = w
                heapq.heappush(lista,(w,u1))

x,y = [int(i) for i in input().split()]


matriz = [[] for _ in range(x + 1)]
dist = [math.inf]*(x + 1)
for _ in range(y):
    a,b,c = [int(i) for i in input().split()]
    matriz[a].append((c,b))
djikstra(matriz,1)
print(*dist[1:])