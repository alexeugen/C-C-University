#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp1(const void *s1, const void *s2)
{
	return strcmp(s1, s2);
}


int cmp2(const void *s1, const void *s2)
{
	if(strlen(s1) > strlen(s2))
		return 1;
	else
		if(strlen(s1) < strlen(s2))
			return -1;
		else
			return 0;
}


int main()
{
	FILE *in, *out;
	in = fopen("text.in", "r+");
	out = fopen("afisare.out", "w");

	int i = 0;
	int k = 4;
	char s[100][100];
	char t[20];
	
	int n = 0;
	while(!feof(in))
	{
		char c;
		fscanf(in, "%c", &c);
		int k = 0;
		while((c >= 'a' && c <= 'z' && !feof(in)) || (c>='A' && c<='Z' &&!feof(in)))
		{
			t[k++] = c;
			fscanf(in, "%c", &c);
		}
		t[k] = '\0';
		
		if(t[0] != '\0')
			strcpy(s[n++], t);

	}


	qsort(s, n, sizeof(s[0]), cmp1);

	for(i = 0; i < n; i++)
			fprintf(out, "%s\n", s[i]);



}