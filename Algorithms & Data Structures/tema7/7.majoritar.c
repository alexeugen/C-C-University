#include <iostream>

using namespace std;

int main()
{
	int s[100];
	int v[]={2, 3, 1, 7, 2, 6, 8};
	int n = 7;

	int k=0;

	for(int i=0; i<n; i++)
	{
		if(k==0)
			s[++k] = v[i];
		else
			if(v[i] == s[k])
				s[++k] = v[i];
			else
				k--;
	}

	int c = 0;
	for(int i=0; i<n; i++)
		if(v[i] == s[1])
			c++;
	if(c>=n/2)
		cout<<s[1];
	else
		cout<<"nu e";

	return 0;
}