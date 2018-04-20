void adjListInit(int N,long int graph[1000][1000]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			graph[i][j] = 0;
		}
	}
}
