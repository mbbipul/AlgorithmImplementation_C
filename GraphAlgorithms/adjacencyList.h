
void adjListInit(int N){
	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			graph[i][j] = 0;
		}
	}
}
void printInitAdj(int N){
    for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			printf("%d ",graph[i][j]);
		}
		printf("\n");
	}
}
void graphEdges(){
    for(i=1;i<=edge;i++){
        for(j=1;j<=edge;j++){
            scanf("%d%d",&start,&end);
            graph[start][end] = 1;
        }

    }
}
