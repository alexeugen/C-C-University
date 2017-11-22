#include <iostream>

using namespace std;

int main()
{
    int *v;
    int n;
    int val;

    cin>>val;
    cin>>n;
    v = new int [n];
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0; i<n; i++)
        if(v[i] == val)
        {
            cout<<i<<'\n';
            break;
        }
    return 0;
}
