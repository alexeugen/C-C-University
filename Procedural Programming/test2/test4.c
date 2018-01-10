#include <stdio.h>
#include <stdlib.h>

void citire(int ***v, int *n, FILE *in)
{
	int i,j;

	fscanf(in, "%d", n);
	
	*v = (int **)malloc(sizeof(int*)*(*n));
	for(i=0; i<(*n); i++)
		(*v)[i] = (int *)malloc(sizeof(int)*(*n));

	for(i=0; i<(*n); i++)
		for(j=0; j<(*n); j++)
			fscanf(in, "%d",&(*v)[i][j]);
}

int main()
{
	FILE *in;
	int **v, n;

	in = fopen("gica.txt", "r");
	citire(&v, &n, in);
	printf("%d\n", v[1][1]);

	return 0;
}