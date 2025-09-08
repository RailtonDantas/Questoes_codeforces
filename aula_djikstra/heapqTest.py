import heapq

lista = []
heapq.heapify(lista)
heapq.heappush(lista,(5,2))
heapq.heappush(lista,(2,2))
heapq.heappush(lista,(3,2))
heapq.heappush(lista,(1,2))

print(heapq.heappop(lista))
print(heapq.heappop(lista))
print(heapq.heappop(lista))
print(heapq.heappop(lista))