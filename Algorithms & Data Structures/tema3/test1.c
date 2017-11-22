#include <stdio.h>


int main()
{
    
    int a,b,c;
    int *pa, *pb, *pc;
    a=1;b=2;c=3;
    pa=new int;
    pb=new int;
    pc=new int;
    *pa=23;
    *pb=42;
    *pc=98;
    printf("%d_%d_%d\n", a, b, c);
    printf("%d_%d_%d\n", *pa, *pb, *pc);
}
