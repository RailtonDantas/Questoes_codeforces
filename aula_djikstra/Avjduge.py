import heapq
import math
def djikstra(graph,vertice):
    lista = []
    heapq.heapify(lista)
    heapq.heappush(lista,(0,vertice))
    while lista:
        d,v = heapq.heappop(lista)
        if dist[v] < d: continue
        dist[v] = d
        for da,v1 in graph[v]:
            w = d + da 
            if w < dist[v1]:
                dist[v1] = w
                prede[v1] = v
                heapq.heappush(lista,(w,v1))
                
a,b = [int(i) for i in input().split()]

dist = [math.inf]*(a + 1)
prede = [-1]*(a + 1)

matriz = [[] for i in range(a + 1)]
for j in range(1,b+1):
    x,y,w = [int(i) for i in input().split()]
    matriz[x].append((w,y))
    matriz[y].append((w,x))

djikstra(matriz,1)
caminho = []
i = a
while True:
    if i == -1:
        break
    caminho.append(i)
    i = prede[i]

if 1 not in caminho:
    print(-1)
else:
    caminho.reverse()
    print(*caminho)


