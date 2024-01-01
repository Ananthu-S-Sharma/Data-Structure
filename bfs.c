#include <stdio.h>

void BFS(int);
int graph[10][10], visited[10], total;

int main() {
    int i, j;

    printf("\nEnter the total number of vertices in graph\n");
    scanf("%d", &total);

   
    printf("\nEnter the adjacency matrix\n");
    for (i = 0; i < total; i++) {
        for (j = 0; j < total; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    for (i = 0; i < total; i++) {
        visited[i] = 0;
    }

    printf("\nBFS traversal is \n");
    BFS(0);

    return 0;
}

void BFS(int startVertex) {
    int queue[10], front = -1, rear = -1, i, j;

    
    queue[++rear] = startVertex;
    visited[startVertex] = 1;

    while (front != rear) {
        
        int currentVertex = queue[++front];
        printf("%d\t", currentVertex);

        
        for (j = 0; j < total; j++) {
            if (!visited[j] && graph[currentVertex][j] == 1) {
                
                queue[++rear] = j;
                visited[j] = 1;
            }
        }
    }
}
