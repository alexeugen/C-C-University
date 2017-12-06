#include <stdio.h>
#include <stdlib.h>

#define arie(a, b, c, d) ((c-a)*(b-d))

typedef struct{
	int x1, y1, x2, y2, s;
}dreptunghi;

int cmp(const void *x, const void *y)
{
	dreptunghi a, b;
	a = *(dreptunghi *) x;
	b = *(dreptunghi *) y;
	if(a.s < b.s)
		return -1;
	if(a.s > b.s)
		return 1;
	return 0;
}

int main()
{
	dreptunghi d[101];
	int n;
	FILE *in;
	FILE *in2;

	in = fopen("dreptunghiuri.txt", "r");
	in2 = fopen("d_sort.txt", "w");

	fscanf(in, "%d", &n);
	int i = 0;
	for(i=0; i<n; i++)
	{
		fscanf(in, "%d%d%d%d", &d[i].x1, &d[i].y1, &d[i].x2, &d[i].y2);
		d[i].s = arie(d[i].x1, d[i].y1, d[i].x2, d[i].y2);
	}

	for(i=0; i<n; i++)
	{
			printf("%d\n", d[i].s);
	}
	
	printf("\n");

	qsort(d, n, sizeof(dreptunghi), cmp);
	for(i=0; i<n; i++)
	{
			fprintf(in2, "%d\n", d[i].s);
	}

	return 0;
}