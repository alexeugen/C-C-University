#include <stdio.h>

typedef struct{
	int nr_legitimatie;
	char nume[100];
	char prenume[100];
	float media_admitere;
}student;

int main()
{
	FILE *in;
	in = fopen("date.txt", "r");

	student stud[100];

	fscanf(in, "%d", &(stud[0].nr_legitimatie));
	printf("%d", stud[0].nr_legitimatie);
}