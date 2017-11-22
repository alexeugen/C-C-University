#include <stdio.h>
#include <math.h>

int main()
{
    int a, b ,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    
    int d = 0;
    
    d += b;
    d *= d;
    d -= 4 * a *c;

    if(d>=0)
    {
    float x1=0, x2=0;

    x1 -= b;
    x1 += sqrt(d);
    x1 /= 2*a;

    x2 -= b;
    x2 -= sqrt(d);
    x2 /= 2*a;

    printf("Solutiile ecuatiei sunt %f si %f", x1, x2);
    }
    else
    {
        d*=-1;
        printf("Solutiile complexe sunt (%d + i%f)/%d si (%d - i%f)/%d", -b , sqrt(d), 2*a, -b, sqrt(d), 2*a); 
    }


    printf("\n");
    return 0;
}

