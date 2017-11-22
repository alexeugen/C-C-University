#include <iostream>

using namespace std;

int main()
{
    int *v;
    int n;
    int min;
    int max;
    int k;
    cin>>n;
    v = new int [n];

    for(int i=0; i<n; i++)
        cin>>v[i];
    
    min = v[0];
    max = v[0];

    for(int i = 1; i<n-1; i+=2)
        if(v[i] < v[i+1])
        {
            if(v[i] < min)
                min = v[i];
        }
        else
            if(v[i] > max)
                max = v[i];

        if(v[n-1] < min)
            min=v[n-1];
        if(v[n-1] > max)
            max=v[n-1];
    
    cout<<min<<" "<<max<<'\n';
    return 0;
}
