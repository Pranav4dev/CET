#include <stdio.h>
int visited[10], n;
int graph[10][10];
int dfs(int start){
    visited[start] = 1;
    printf("%d", start);
    for(int i = 0; i < n; i++){
        if(graph[start][i] == 1 && visited[i] == 0){
            dfs(i);
        }
    }
    return 0;
}

int main(){
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjecency matrix: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d to %d: ", i, j);
            scanf("%d",  &graph[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d",graph[i][j]);
        }
        printf("\n");
    }

    int start;
    printf("Enter the start value: ");
    scanf("%d", &start);
    dfs(start);
}