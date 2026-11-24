#include <stdio.h>

int n , graph[10][10], visited[10];

int BFS(int start){
    
}

int main(){
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d to %d ", i+1, j+1);
            scanf("%d", graph[i][j]);
        }
    }
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d", graph[i][j]);
        }
    }

    int start;
    printf("Enter the starting vertex: ");
    scanf("%d", &start);
    BFS(start);
}