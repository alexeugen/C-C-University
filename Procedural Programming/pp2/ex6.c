#include <stdio.h>

int main()
{
    int p;
    p= 18;
    int i,j;
    for(i=1; i<=p/2; i++)
        for(j=1; j<=p/2; j++)
        {   
            int k = p - i - j;
            if(i+j>k && i+k>j && j+k>i)
                printf("%d %d %d   ", i, j ,k);
        }
}
