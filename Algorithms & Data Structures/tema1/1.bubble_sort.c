#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int aux = x;
    x = y;
    y = aux;
}

int main()
{
    int *v;
    int n;
    int cn;

    cin>>n;
    cn = n;
    v = new int [n];
    for(int i=0; i<n; i++)
        cin>>v[i];

    int ok;
    do{
        ok = 0;
        for(int i=0; i<cn-1; i++)
            if(v[i] > v[i+1])
            {
                swap(v[i], v[i+1]);
                ok = i+1;
            }
        for(int i=0; i<n; i++)
            cout<<v[i];
        cout<<"\n";
        cn = ok;
    }   while(ok);
}
