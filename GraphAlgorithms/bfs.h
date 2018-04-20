void BFS(int source){
    int head=0,tail=0;
    for(u=1;u<=node;u++){
        if(u!=source){
                color[u] = 0;//marking all node with white
                discovered[u] = 10000;
                parent[u] = -1;
        }
    }
    color[source] = 1;
    discovered[source] = 0;
    parent[source] = NULL;
    Queue[head++] = source;
    while(head!=tail){
        u = Queue[tail++];
        for(v=1;v<=node;v++){
            if(graph[u][v]==1 && color[v]==0){
                color[v] = 1;
                discovered[v] = discovered[u] + 1;
                parent[v] = u;
                Queue[head++] = v;
            }
        }
        color[u] = 2;
    }

}
void printPath(int s,int d){
    if(d == s){
        printf("%d ",s);
    }
    else if(parent[d] == NULL){
        printf("No path\n");
    }
    else{
        printPath(s,parent[d]);
        printf("%d ",d);
    }
}
