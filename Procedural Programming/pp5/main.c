#include <stdio.h>
#include "cod.h"

int main()
{
    //ex1
    char c = 'B';
    char *p;
    p = &c;
    ex1(p);
    printf("%c\n", c);

    //ex2
    char *c2;
    c2 = "6 * 3";
    ex2(c2);
    printf(c2);
}
