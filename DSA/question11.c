// 11. Write a c program to demonstrate DFS graph traversal.

#include <stdio.h>

#define MAX 20

int visited[MAX];

// Recursive DFS function
void dfs(int graph[MAX][MAX], int n, int vertex) {
    visited[vertex] = 1;
    printf("%d ", vertex);

    for (int i = 0; i < n; i++) {
        if (graph[vertex][i] == 1 && !visited[i]) {
            dfs(graph, n, i);
        }
    }
}

int main() {
    int n, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[MAX][MAX];

    printf("Enter adjacency matrix (row-wise):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter starting vertex for DFS (0 to %d): ", n - 1);
    scanf("%d", &start);

    // Initialize visited array to 0
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    printf("DFS Traversal starting from vertex %d: ", start);
    dfs(graph, n, start);
    printf("\n");

    return 0;
}


// Enter number of vertices: 4
// Enter adjacency matrix (row-wise):
// 0 1 1 0
// 1 0 1 1
// 1 1 0 1
// 0 1 1 0
// Enter starting vertex for DFS (0 to 3): 0
// DFS Traversal starting from vertex 0: 0 1 2 3
