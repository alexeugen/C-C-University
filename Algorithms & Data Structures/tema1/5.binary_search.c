#include <iostream>

using namespace std;

int main()
{
    int *v;
    int n;
    cin>>n; 
    v = new int [n];
    for(int i=0; i<n; i++)
        cin>>v[i];

    int k = 4;
    int p=0;
    int u=n-1;
    int gasit = 0;
    while(p<=u)
    {
        int m = (p+u)/2;
        if(v[m] == k)
        {
            cout<<m;
            gasit = 1;
            break;
        }
        else if(v[m] < k)
            p = m+1;
        else
            u = m-1;
    }
    if(!gasit)
        cout<<"-1";
    return 0;
}
