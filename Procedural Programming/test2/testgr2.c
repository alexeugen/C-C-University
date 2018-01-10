#include <stdio.h>
#include <stdlib.h>


void citire(int **v, int *n)
{
	int i;

	scanf("%d", n);
	*v = (int*)malloc(sizeof(int)*(*n));
	for(i = 0; i < (*n); i++)	
		scanf("%d", &(*v)[i]);
}

void puneinbinar(FILE *in, int *v, int n)
{
	int i;

	for(i = 0; i < n; i++)
		if(v[i] % 2)
			fwrite(v+i, 4, 1, in);
}

void puneprime(FILE *in)
{

}

int main()
{
	int *v,n;
	//a)
	//citire(&v,&n);
	//printf("%d",v[3]);

	//b
	FILE *in;
	//in = fopen("date", "wb");
	//puneinbinar(in, v, n);
	
	//c
	in = fopen("date", "r+b");
	int x[10];
	fread(x, 4, 5, in);
	printf("%d\n", x[3]);
	int y = 17;
	fwrite(&y, 4, 1, in);
	int z;
	rewind(in);
	fseek(in, 20, SEEK_SET);
	fread(&z, 4, 1, in);
	printf("%d\n", z);

	return 0;
}