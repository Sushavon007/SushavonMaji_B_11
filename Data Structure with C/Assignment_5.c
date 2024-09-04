#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10
#define INF 9999

struct Graph {
  int numVertices;
  int **adjMatrix;
};

struct Graph *createGraph(int n) {
  struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
  graph->numVertices = n;

  // Allocate memory for adjacency matrix
  graph->adjMatrix = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    graph->adjMatrix[i] = (int *)malloc(n * sizeof(int));
    for (int j = 0; j < n; j++) {
      graph->adjMatrix[i][j] = INF; // Initialize with infinity
    }
  }

  return graph;
}

void addEdge(struct Graph *graph, int src, int dest, int weight) {
  graph->adjMatrix[src][dest] = weight;
  graph->adjMatrix[dest][src] = weight; // Undirected graph
}

void displayGraph(struct Graph *graph) {
  printf("Adjacency Matrix Representation:\n");
  for (int i = 0; i < graph->numVertices; i++) {
    for (int j = 0; j < graph->numVertices; j++) {
      if (graph->adjMatrix[i][j] == INF) {
        printf("INF\t");
      } else {
        printf("%d\t", graph->adjMatrix[i][j]);
      }
    }
    printf("\n");
  }
}

void countVerticesAndEdges(struct Graph *graph, int *vertices, int *edges) {
  *vertices = graph->numVertices;
  *edges = 0;
  for (int i = 0; i < graph->numVertices; i++) {
    for (int j = i + 1; j < graph->numVertices; j++) {
      if (graph->adjMatrix[i][j] != INF) {
        (*edges)++;
      }
    }
  }
}

int isCyclicUtil(int v, int visited[], int parent, struct Graph *graph) {
  visited[v] = 1;
  for (int i = 0; i < graph->numVertices; i++) {
    if (graph->adjMatrix[v][i] != INF) {
      if (!visited[i]) {
        if (isCyclicUtil(i, visited, v, graph))
          return 1;
      } else if (i != parent)
        return 1;
    }
  }
  return 0;
}

int isCyclic(struct Graph *graph) {
  int visited[MAX_VERTICES] = {0};
  for (int i = 0; i < graph->numVertices; i++) {
    if (!visited[i]) {
      if (isCyclicUtil(i, visited, -1, graph))
        return 1;
    }
  }
  return 0;
}

void countOddEvenVertices(struct Graph *graph, int *odd, int *even) {
  *odd = 0;
  *even = 0;
  for (int i = 0; i < graph->numVertices; i++) {
    int degree = 0;
    for (int j = 0; j < graph->numVertices; j++) {
      if (graph->adjMatrix[i][j] != INF)
        degree++;
    }
    if (degree % 2 == 0)
      (*even)++;
    else
      (*odd)++;
  }
}

int isCompleteGraph(struct Graph *graph) {
  int maxEdges = (graph->numVertices * (graph->numVertices - 1)) / 2;
  int vertices, edges;
  countVerticesAndEdges(graph, &vertices, &edges);
  return edges == maxEdges;
}

int main() {
  int choice;
  struct Graph *graph = NULL;
  int src, dest, weight;
  int vertices, edges, odd, even;

  printf("\nMenu:\n");
  printf("1. Create Graph\n");
  printf("2. Add Edge\n");
  printf("3. Display Graph\n");
  printf("4. Count Vertices and Edges\n");
  printf("5. Detect Cycle\n");
  printf("6. Count Odd and Even Degree Vertices\n");
  printf("7. Check if Graph is Complete\n");
  printf("8. Exit\n");
  while (1) {
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      if (graph != NULL) {
        printf("Graph already exists. Please select option 2 to add edges.\n");
      } else {
        int numVertices;
        printf("Enter number of vertices: ");
        scanf("%d", &numVertices);
        graph = createGraph(numVertices);
        printf("Graph created successfully.\n");
      }
      break;

    case 2:
      if (graph == NULL) {
        printf("Graph does not exist. Please create a graph first (Option 1).\n");
      } else {
        printf("Enter source vertex, destination vertex, and weight of the edge: ");
        scanf("%d %d %d", &src, &dest, &weight);
        addEdge(graph, src, dest, weight);
        printf("Edge added successfully.\n");
      }
      break;

    case 3:
      if (graph == NULL) {
        printf(
            "Graph does not exist. Please create a graph first (Option 1).\n");
      } else {
        displayGraph(graph);
      }
      break;

    case 4:
      if (graph == NULL) {
        printf(
            "Graph does not exist. Please create a graph first (Option 1).\n");
      } else {
        countVerticesAndEdges(graph, &vertices, &edges);
        printf("Number of vertices: %d\n", vertices);
        printf("Number of edges: %d\n", edges);
      }
      break;

    case 5:
      if (graph == NULL) {
        printf(
            "Graph does not exist. Please create a graph first (Option 1).\n");
      } else {
        if (isCyclic(graph))
          printf("Graph contains a cycle.\n");
        else
          printf("Graph does not contain a cycle.\n");
      }
      break;

    case 6:
      if (graph == NULL) {
        printf(
            "Graph does not exist. Please create a graph first (Option 1).\n");
      } else {
        countOddEvenVertices(graph, &odd, &even);
        printf("Number of odd degree vertices: %d\n", odd);
        printf("Number of even degree vertices: %d\n", even);
      }
      break;

    case 7:
      if (graph == NULL) {
        printf(
            "Graph does not exist. Please create a graph first (Option 1).\n");
      } else {
        if (isCompleteGraph(graph))
          printf("Graph is complete.\n");
        else
          printf("Graph is not complete.\n");
      }
      break;

    case 8:
      printf("Exiting...\n");
      exit(0);

    default:
      printf("Invalid choice. Please enter a valid option.\n");
      break;
    }
  }

  return 0;
}