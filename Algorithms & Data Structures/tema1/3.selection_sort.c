#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    int aux;

    aux = x;
    x = y;
    y = aux;
}

int main()
{
    int *v;
    int n, pmin;

    cin>>n;
    v = new int [n];
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0; i<n-1; i++)
    {
        pmin = i;
        for(int j=i+1; j<n; j++)
            if(v[j] < v[pmin])
                pmin = j;
        swap(v[i], v[pmin]);
        for(int j = 0; j<n; j++)
            cout<<v[j]<<" ";
        cout<<"\n";
    }
}
