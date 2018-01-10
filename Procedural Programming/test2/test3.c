#include <stdio.h>
#include <stdlib.h>

void citire(int ***v, int *n, int *m)
{
	scanf("%d", n);
	scanf("%d", m);

	*v = (int **)malloc(sizeof(int *)* (*n));
	int i,j;
	for(i = 0; i<(*n); i++)
		(*v)[i] = (int *)malloc(sizeof(int)*(*m));

	for(i = 0; i<(*n); i++)
		for(j = 0; j<(*m); j++)
			scanf("%d", &(*v)[i][j]);
}

void citire2(int **v, int *n)
{
	scanf("%d", n);
	*v = (int *)malloc(sizeof(int) * (*n));
	int i;
	for(i = 0; i<n; i++)
		scanf("%d", (*v)[i]);
}

int main()
{
	int **v, n, m;
	citire(&v,&n, &m);

	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
			printf("%d ", v[i][j]);
		printf("\n");
	}
}