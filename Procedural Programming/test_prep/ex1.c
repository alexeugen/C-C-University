#include <stdio.h>
#include <stdlib.h>

union{
	char v[10];
	char c;
}ceva;


int main()
{
	ceva y;
	
	y.v = "ionel";
	printf("%d\n", y.v);

	return 0;
}