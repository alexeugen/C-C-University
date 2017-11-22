#include <iostream>

using namespace std;

// BINARY INSERTION SORT???

int main()
{
    int *v;
    int n;

    cin>>n;
    v = new int [n];
    for(int i=0; i<n; i++)
        cin>>v[i];

    for(int i=1; i<n; i++)
    {
        int aux = v[i];
        int j = i;
        while(j>=1 && v[j-1] > aux)
        {
            v[j] = v[j-1];
            j--;
        }
        v[j] = aux;
        for(int k=0; k<n; k++)
            cout<<v[k];
        cout<<'\n';
    }
    return 0;
}
