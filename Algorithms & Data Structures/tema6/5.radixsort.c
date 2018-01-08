#include<iostream>
using namespace std;

int v[] = {6, 3, 5, 7, 4, 8, 9, 1, 2, 0};
int n = 10;

int getMax(int n)
{
    int mx = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > mx)
            mx = v[i];
    return mx;
}

void countSort(int n, int exp)
{
    int output[n];
    int i, count[10] = {0};

    for (i = 0; i < n; i++)
        count[ (v[i]/exp)%10 ]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (v[i]/exp)%10 ] - 1] = v[i];
        count[ (v[i]/exp)%10 ]--;
    }

    for (i = 0; i < n; i++)
        v[i] = output[i];
}

void radixsort(int n)
{
    int m = getMax(arr, n);
 
    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(n, exp);
}
 
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{

    radixsort(arr, n);
    print(arr, n);
    return 0;
}