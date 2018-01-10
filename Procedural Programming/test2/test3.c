#include <stdio.h>
#include <stdlib.h>


void citire3(int v[], int *n)
{
	scanf("%d", n);
	v = (int *)malloc(sizeof(int) * (*n));
	int i;
	for(i = 0; i<*n; i++)
		scanf("%d", &v[i]);
}

int main()
{
	int *v, n;
	//citire(&v,&n, &m);
	citire3(v, &n);
	int i,j;
	for(i=0; i<n; i++)
	{
//		for(j=0; j<m; j++)
			printf("%d ", v[i]);
	//	printf("\n");
	}
}