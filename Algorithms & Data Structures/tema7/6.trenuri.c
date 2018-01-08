#include <iostream>

using namespace std;

struct depou
{
	int j;
	int m;
	int a[100];
};

int main()
{	

	depou v[100];
	int n, k = 3, l;
	int c[] = {3, 6, 9, 2, 4, 7, 1, 8, 5};

	n = 9;
	l = 0;

	for (int i = 0; i < k; i++)
	{
		v[i].a[0] = 0;
		v[i].j = 0;
		v[i].m = 1;
	}
	int i = 0;
	
		while(l < k && i<n)
		{
				int q = 0;
				if (c[i] > v[l].a[v[l].j])
				{
					v[l].j++;
					v[l].a[v[l].j] = c[i];
					cout<<c[i];
					i++;
					q = 1;
				}
				if (q)
					l = 0;
				else
					l++;
		}

	cout<<endl;
	for(int j=0; j<=2; j++)
	{
	for(int i = 1; i <= v[j].j; i++)
		cout<<v[j].a[i];
		cout<<endl;
		}		
/*

	int sum = 0;
	for(int i = 0; i<k; i++)
		sum += v[i].j;
	int min;
	int h = 0;

	while(h < sum)
	{
		min = v[0].a[1];
		for(int i=0; i<k; i++)
		{
			if(v[i].a[v[i].m] < min)
			{
				min = i;
			}
		}
		cout<<v[min].a[v[min].m];
		h++;
		v[min].m++;
	}
*/
	return (0);

}