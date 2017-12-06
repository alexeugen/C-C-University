#include <stdio.h>
#include <string.h>

union exemplu
{
	int nr;
	long int v;
}z;

union alfa
{
	char ch[3];
	int y;
}beta;


enum culori{
	alb=-2, rosu, verde = 10, maro, grena
}culoare;

int main()
{
	int i;
	for(i=alb; i<=maro; i++)
		printf("%d", i);
	return 0;

}