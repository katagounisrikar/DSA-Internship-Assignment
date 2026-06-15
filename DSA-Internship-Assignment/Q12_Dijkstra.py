import heapq

def dijkstra(graph, start):
    distances = {vertex: float('inf') for vertex in graph}

    distances[start] = 0

    priority_queue = [(0, start)]

    while priority_queue:

        current_distance, current_vertex = heapq.heappop(priority_queue)

        if current_distance > distances[current_vertex]:
            continue

        for neighbor, weight in graph[current_vertex]:

            distance = current_distance + weight

            if distance < distances[neighbor]:

                distances[neighbor] = distance

                heapq.heappush(
                    priority_queue,
                    (distance, neighbor)
                )

    return distances


graph = {
    'A': [('B', 4), ('C', 2)],
    'B': [('A', 4), ('D', 5)],
    'C': [('A', 2), ('D', 1)],
    'D': [('B', 5), ('C', 1)]
}

source = 'A'

result = dijkstra(graph, source)

print("Shortest distances from", source)

for vertex, distance in result.items():
    print(vertex, ":", distance)