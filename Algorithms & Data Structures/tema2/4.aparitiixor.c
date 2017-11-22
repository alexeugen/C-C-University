#include <iostream>

using namespace std;

int main()
{
    int v[100], n;
    

    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];

    for(int i=1; i<n; i++)
        v[0]=v[0]^v[i];

    cout<<v[0];
    cout<<'\n';
    return 0;
}
