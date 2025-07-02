// 10. Write a c program to demonstrate BFS graph traversal.


#include <stdio.h>

#define MAX 20

int queue[MAX], front = -1, rear = -1;

// Enqueue function
void enqueue(int vertex) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1) front = 0;
        queue[++rear] = vertex;
    }
}

// Dequeue function
int dequeue() {
    int vertex;
    if (front == -1 || front > rear) {
        return -1; // Queue is empty
    } else {
        vertex = queue[front++];
        if (front > rear) front = rear = -1;
        return vertex;
    }
}

// BFS function
void bfs(int graph[MAX][MAX], int n, int start) {
    int visited[MAX] = {0};
    int i, current;

    enqueue(start);
    visited[start] = 1;

    printf("BFS Traversal starting from vertex %d: ", start);

    while ((current = dequeue()) != -1) {
        printf("%d ", current);

        // Check adjacent vertices
        for (i = 0; i < n; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

int main() {
    int n, i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[MAX][MAX];

    printf("Enter adjacency matrix (row-wise):\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter starting vertex for BFS (0 to %d): ", n-1);
    scanf("%d", &start);

    bfs(graph, n, start);

    return 0;
}


// Enter number of vertices: 4
// Enter adjacency matrix (row-wise):
// 0 1 1 0
// 1 0 1 1
// 1 1 0 1
// 0 1 1 0
// Enter starting vertex for BFS (0 to 3): 0
// BFS Traversal starting from vertex 0: 0 1 2 3
