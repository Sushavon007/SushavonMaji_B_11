#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10

struct Graph {
    int vertices;
    int** adjacency_matrix;
};

struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->vertices = vertices;

    graph->adjacency_matrix = (int*)malloc(vertices * sizeof(int));
    for (int i = 0; i < vertices; i++) {
        graph->adjacency_matrix[i] = (int*)calloc(vertices, sizeof(int));
    }

    return graph;
}

void addEdge(struct Graph* graph, int source, int destination, int weight) {
    graph->adjacency_matrix[source][destination] = weight;
    graph->adjacency_matrix[destination][source] = weight;
}

void DFSUtil(struct Graph* graph, int vertex, int visited[]) {
    visited[vertex] = 1;
    printf("%d ", vertex);

    for (int i = 0; i < graph->vertices; i++) {
        if (graph->adjacency_matrix[vertex][i] && !visited[i]) {
            DFSUtil(graph, i, visited);
        }
    }
}

void DFS(struct Graph* graph, int start_vertex) {
    int visited[MAX_VERTICES] = {0};

    printf("Depth First Search Traversal: ");
    DFSUtil(graph, start_vertex, visited);
    printf("\n");
}

void BFS(struct Graph* graph, int start_vertex) {
    int visited[MAX_VERTICES] = {0};
    int queue[MAX_VERTICES];
    int front = 0, rear = -1;

    printf("Breadth First Search Traversal: ");

    visited[start_vertex] = 1;
    queue[++rear] = start_vertex;

    while (front <= rear) {
        int current_vertex = queue[front++];
        printf("%d ", current_vertex);

        for (int i = 0; i < graph->vertices; i++) {
            if (graph->adjacency_matrix[current_vertex][i] && !visited[i]) {
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
    printf("\n");
}

int main() {
    int vertices, edges;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    struct Graph* graph = createGraph(vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    int source, destination, weight;
    printf("Enter the edges with weights (source destination weight):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d %d", &source, &destination, &weight);
        addEdge(graph, source, destination, weight);
    }

    int start_vertex;
    printf("Enter the starting vertex for DFS and BFS: ");
    scanf("%d", &start_vertex);

    DFS(graph, start_vertex);
    BFS(graph, start_vertex);

    return 0;
}