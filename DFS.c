#include <stdio.h>
#define MAX 5
int visited[MAX];
void DFS(int graph[MAX][MAX], int node, int n) {
    visited[node] = 1;
    printf("%d ", node);
    for(int i = 0; i < n; i++) {
        if(graph[node][i] && !visited[i]) {
            DFS(graph, i, n);
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
    for(int i = 0; i < n; i++) visited[i] = 0;
    printf("DFS traversal: ");
    DFS(graph, 0, n);
    return 0;
}
