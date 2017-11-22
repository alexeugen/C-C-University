#include <iostream>

using namespace std;

int main()
{
    int *v;
    int n;
    int k = 3;

    cin>>n;
    v = new int [n];
    for(int i=0; i<n; i++)
        cin>>v[i];

    for(int i=0; i<n; i++)
    {
        if(v[i] == k)
        {   
            for(int j=i; j<n-1; j++)
                v[j]=v[j+1];
            n--;
            i--;
        }
    }
    for(int i=0; i<n; i++)
        cout<<v[i];
}
