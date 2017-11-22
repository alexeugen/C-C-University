#include <iostream>

using namespace std;

int v[]={5, 3, 7, 2};
int n=3;

void qsort(int p, int u)
{
	if(p < u)
	{
		int st=p, dr=u;
		int x=v[p];
		while(st<dr)
		{
			while(st < dr && x<v[dr])
				dr--;
			v[st]=v[dr];
			while(st < dr && v[st]<x)
				st++;
			v[dr]=v[st];
		}
		v[st] = x;
		qsort(p, st-1);
		qsort(st+1, u);
	}
}



int main()
{
	qsort(0,3);
	for(int i=0; i<=n; i++)
		cout<<v[i]<<" ";
	cout<<"\n";
}