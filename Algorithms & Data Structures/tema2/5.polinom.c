#include <iostream>

using namespace std;


int prod[100];

int main()
{

    int n;
    int x;
    int s;

    //a
    n=2;
    int a[] = {1,2,1};
    x = 3;
    
    s=a[n]*x + a[n-1];
    for(int i=n-2; i>=0; i--)
        s = s*x+ a[i];
    cout<<s;
    cout<<'\n';

    //b
    int m =4;
    int b[] = {3,3,3,3,3};
    
    int o;
    if(m>n)
        o = m;
    else 
        o =n;
    int c[100];
    int i=0;
    while(i<=n && i<=m)
    {
        c[i] = a[i] + b[i];
        i++;
    }

    while(b[i])
    {
        c[i] = b[i];
        i++;
    }
    while(a[i])
    {
        c[i] = a[i];
        i++;
    }
    for(int j=0; j<=o; j++)
        cout<<c[j]<<' ';
    cout<<'\n';
    

    //c
    o = m+n;
    for(int j=0; j<=n; j++)
        for(int l=0; l<=n; l++)
            prod[j+l] += a[j]*b[l];

    for(int j=0; j<=o; j++)
        cout<<prod[j]<<' ';

    cout<<'\n';
}
