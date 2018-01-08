#include<iostream>

using namespace std;
 
int v[] = {8, 3, 5, 4, 6, 0, 1, 2, 7};
int n = 9;
 
int partition(int l, int r)
{
    int x = v[r], i = l, j;
    int aux;
    for (j = l; j <= r - 1; j++)
    {
        if (v[j] <= x)
        {
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++;
        }
    }
    aux = v[i];
    v[i] = v[j];
    v[j] = aux;
    return i;
}

int kulea(int l, int r, int k)
{
    if (k > 0 && k <= r - l + 1)
    {
        int pos = partition(l, r);
 
        if (pos-l == k-1)
            return v[pos];
        if (pos-l > k-1)  
            return kulea(l, pos-1, k);
 
        return kulea(pos+1, r, k-pos+l-1);
    }
}
 

int main()
{
    int k = n/2;    
    cout << kulea(0, n-1, k);
    return 0;
}