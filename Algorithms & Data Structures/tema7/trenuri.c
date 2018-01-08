#include <iostream>

using namespace std;

int main()
{
	int c1[11] , c2[11], c3[11];
	int v[10]={3, 6, 9, 2, 4, 7, 1, 8, 5};

	int i1=1;
	int i2=1;
	int i3=1;

	c1[0] = -1;
	c2[0] = -1;
	c3[0] = -1;
	int i=0;
	while(i<=9)
	{
		int q=0;
		while(v[i] > c1[i1-1])
		{
			c1[i1++] = v[i++];
			q=1;
		}
		while(v[i] > c2[i2-1] && v[i] < c1[i1-1])
		{
			c2[i2++] = v[i++];
			q=1;
		}
		while(v[i] > c3[i3-1] && v[i] < c1[i1-1] && v[i] < c2[i2-1])
		{
			c3[i3++] = v[i++];
			q=1;
		}
		if(!q)
			i++;
	}

	int j1=1;
	int j2=1;
	int j3=1;
	
	int k=1;
	while(k<=9)
	{
		if(c1[j1] <= c2[j2] && c1[j1] <= c3[j3])
		{
			cout<<c1[j1++];
			k++;
		}
		if(c2[j2] <= c1[j1] && c2[j2] <= c3[j3])
		{
			cout<<c2[j2++];
			k++;
		}
		if(c3[j3] <= c1[j1] && c3[j3] <= c2[j2])
		{
			cout<<c3[j3++];
			k++;
		}
	}

}