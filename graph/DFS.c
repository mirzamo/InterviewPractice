// DFS graph 
//using adjacency matrix
#include <stdio.h>


void DFS (int **, int);

int main()
{
	int G[10][10], n;
	int i, j;

	printf("Enter number of vertices: ");
	scanf("%d\n", &n);

	//make the adjacency matrix
	printf("Entr adjacency matrix:");
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &G[i][j]);

	
	// set the vistied array to zero
	//for(i = 0;  i <n; i++)
	//	visited[i] = 0;
	

	DFS(G, 0);
		
	return 0;	
}

void DFS(int **G, int i)
{
	int visited[10] = {0}, j;

	visited[i] = 1;
	printf("%d\n", i);

	for(j = 0; j < n; j++)
		if(visited[j] == 0 && G[i][j] == 1)
			DFS(G, j);
}
