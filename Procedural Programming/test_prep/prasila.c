#include <stdio.h>
//#include <stdlib.h>


int cmp(const void *x, const void *y)
{
	int a =*(int*)x;
	int b = *(int*)y;
	if(a<b)
		return 1;
	else
		if(a>b)
			return -1;
		else
			return 0;
}

int main()
{
	int v[] = {3, 2, 4, 1};
	qsort(v, (sizeof(v)/sizeof(v[0])), sizeof(v[0]), cmp);
	int i;
	for(i=0; i<=3; i++)
		printf("%d", v[i]);
}