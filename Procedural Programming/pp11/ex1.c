#include <stdio.h>
#include <stdlib.h>

void citire(int ***v, int *n, int *m)
{
	scanf("%d", n);
	scanf("%d", m);

	*v = (int **)malloc(sizeof(int*) * (*n));
	int i;
	for(i = 0; i < (*n); i++)
		(*v)[i] = (int *)malloc(sizeof(int)*(*m));
	(*v)[2][2] = 4;
}

int main()
{
	int **v;
	int n,m;
	citire(&v,&n,&m);
	printf("%d",v[2][2]);
}