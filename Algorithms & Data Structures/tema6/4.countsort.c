#include <iostream>

using namespace std;

int main()
{
	int r1=0, r2=39;
	int v[100]={8, 9, 4, 32, 8, 24, 28, 18, 24, 11};
	int w[39]={0};
	
	int n = 10;
	for(int i=0; i<n; i++)
		w[v[i]]++;


	int k=0;
	for(int i=0; i<r2; i++)
		for(int j=1; j<=w[i]; j++)
			v[k++]=i;

	for(int i=0; i<n; i++)
		cout<<v[i]<<' '; 


	return 0;
}