#include <iostream>

using namespace std;

int t[4];
int main()
{
    int v[100];
    int n;
    int k = 3;
    int tn =4;

    cin>>n;
    
    for(int i=0; i<n; i++)
        cin>>v[i];

    for(int i=0; i<n; i++)
    {
        if(v[i] == k)
        {   
            int l=n-i-1;
            n+=tn;
            for(int j=n-1; j>=n - l; j--)
                v[j]=v[j-tn];
            for(int j=i+1; j<= i+tn; j++)
                v[j]=t[j-i-1];
            i+=(tn);
        }
    }
    for(int i=0; i<n; i++)
        cout<<v[i];
}
