#include<stdio.h>
int graph[100][100];
int i,j;
int start,end;
int node,edge,u,v,color[100],discovered[100],parent[100],Queue[100];
#include "adjacencyList.h"
#include "bfs.h"
int main(){
    int a,b;
    freopen("bfsInput.txt","r",stdin);
    scanf("%d%d",&node,&edge);
    adjListInit(node);
    printInitAdj(node);
    printf("\n\n");
    graphEdges();
    printInitAdj(node);
    BFS(1);
    printf("\n\n\nhh\n");
    for(i=1;i<=node;i++){
        printf("%d ",color[i]);

    }
    printf("\n");
    for(i=1;i<=node;i++){
        printf("%d ",discovered[i]);

    }
    printf("\n");
    a = 1;
    b= 6;
    printPath(a,b);
    return 0;
}
