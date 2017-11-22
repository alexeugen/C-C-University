#include <stdio.h>
#include <math.h>

struct punct{
    int x;
    int y;
}   a, b;

int main()
{
    scanf("%d", &a.x);
    scanf("%d", &a.y);
    scanf("%d", &b.x);
    scanf("%d", &b.y);

    printf("Lungimea segmentului este: %f", sqrt((b.x-a.x)^2 + (b.y-a.y)^2));

    return 0;
}
