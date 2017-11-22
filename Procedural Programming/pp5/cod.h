#ifndef __COD_H
 #define __COD_H

void ex1(char *c)
{
    if(*c>='A' && *c<='Z')
        *c+=32;
}

void ex2(char *c)
{
    int sw=0;
    int a=0;
    int i = 0;
    while(c[i]>='0' && c[i]<='9')
    {
        a = a*10 + (c[i] - 48);
        i++;
    }

    i++;
    char op = c[i];

    i+=2;
    int b = 0;
    
    while(c[i]>='0' && c[i]<='9')
    {
        b = b * 10 + (c[i] - 48);
        i++;
    }
    
    switch (op)
    {
        case 42: printf("%d = ", a*b);
                break;
        case 47: printf("%d = ", a/b);
                break;
        case 43: printf("%d = ", a+b);
                break;
        case 45: printf("%d = ", a-b);
                break;
        case 37: printf("%d = ", a%b);
                break;
        default: printf("nu e caracter bun");
    }

}

struct date{
    unsigned int nota_mate: 4;
    
};

void ex3

#endif
