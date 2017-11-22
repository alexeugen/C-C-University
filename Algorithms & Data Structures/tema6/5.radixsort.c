#include <iostream>

using namespace std;

int cf(int x, int i)
{
	while(i>1)
	{
		x/=10;
		i--;
	}
	return x%10;
}

int main()
{
	int f[10];
}