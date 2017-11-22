#include <stdio.h>


int pd(int i)
{
    int j;
    if(i>3)
    for(j=2; j<=i/2; j++)
        if(i%j == 0)
            return j;

    return 0;
}

int main()
{
    int n;
    int a[100][100];
    scanf("%d", &n);

    int s = 1;
    int i;
    int j;
    int c;
    for(i = 0; i<=(n-1)/2; i++)
    {   
        for(j=i; j<= n-1-i; j++)
            a[i][j] = s++;
        for(j=i+1; j<= n-1-i; j++)
            a[j][n-1-i] = s++;
        for(j=n-1-i-1; j>= i; j--)
            a[n-1-i][j] = s++;
        for(j = n-1-i-1; j>i; j--)
            a[j][i] = s++;
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}
