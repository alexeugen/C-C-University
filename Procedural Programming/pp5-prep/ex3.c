#include <stdio.h>

//#define medie(x, y, b) (4/5)(x+y) + (1/5)b

typedef struct {
	int nr_leg;
	char nume[100];
	int nota_mate, nota_info, nota_bac;
	float medie;
	int A: 1;
} candidat;

int main()
{
	candidat c[100];

	FILE *in;
	in = fopen("date.in", "r");
	int i=0;
	while(!feof(in))
	{
		fscanf(in, "%d%s%d%d%d", &c[i].nr_leg, c[i].nume,
		 &c[i].nota_mate, &c[i].nota_info, &c[i].nota_bac );
		i++;
	}
	printf("%d", medie(4.0,5.0,6.0));
}