#include <stdio.h>
#define MAX 5
int queue[MAX], front = -1, rear = -1;
void enqueue(int x) {
    queue[++rear] = x;
    if(front == -1) front = 0;
}
int dequeue() {
    return queue[front++];
}
int isEmpty() {
    return front > rear || front == -1;
}
void BFS(int graph[MAX][MAX], int start, int n) {
    int visited[MAX] = {0};
    enqueue(start);
    visited[start] = 1;
    printf("BFS traversal: ");
    while(!isEmpty()) {
        int node = dequeue();
        printf("%d ", node);
        for(int i = 0; i < n; i++) {
            if(graph[node][i] && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}
int main() {
    int n = 5;
    int graph[MAX][MAX] = {
        {0,1,1,0,0},
        {1,0,0,1,1},
        {1,0,0,0,1},
        {0,1,0,0,1},
        {0,1,1,1,0}
    };
    BFS(graph, 0, n);
    return 0;
}
