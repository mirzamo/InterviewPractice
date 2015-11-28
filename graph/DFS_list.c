
//DFS Graph
//Adjacency List

#include<stdio.h>

typedef struct node NODE;

struct node
{
	int value;
	struct node *next;
};

void DFS(NODE *, int, int);
void insert(NODE *, int, int);

int main()
{
	NODE *G[20], v_num, e_num;
	int i, v, u;

	printf("Enter the number of vertices: ");
	scanf("%d", v_num);

	printf("Enter the number of edges: ");
	scanf("%d", e_num);


	for (i = 0; i < e; i++)
	{
		printf("Enter an edge (u, v):\n");
		scanf("%d%d", &u, &v)
		insert(G, u, v);
	}

	DFS(G, v_num, 0);

	return 0;
}

void insert (NODE *G, int u, int v)
{
	NODE *walker = G[u];

	while(walker)
	{
		walker = walker->next;
	} 

	if( (walker = (NODE *) malloc sizeof(NODE)) == NULL)
	{
		printf("allocation error!\n");
		exit(1);
	}

	walker->value = v;
	walker->next = NULL:

	return;
}


void DFS (NODE *G, int v_num, int i)
{
	int visited[v_num] = {0};
	int i;
	NODE *walker;

	visited[i] = 1;
	walker = G[i];

	printf("%d\n", i);

	while(walker)
	{
		if(visited[walker->data] == 0)
			DFS(walker->data);
		walker = walker->next;
	}

	return;

}