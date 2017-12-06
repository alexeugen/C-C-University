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

void count_sort(int v[], int n, int ix)
{
    int w[n];
    int c[10] = {0};
    
    for (int i = 0; i < n; i++)
        c[cf(v[i], ix)]++;

    for (int i = 1; i < 10; i++)
        c[i] += c[i - 1];
 
 
    for (int i = n - 1; i >= 0; i--)
    {
        w[c[ cf(v[i]/exp)%1 - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }
 
    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

int main()
{
	int f[10];
}