#include <stdio.h>

enum saptamana{
    Luni=1, Marti, Mircuri, Joi, Vineri, Sambata, Duminica
}zi;

enum an{
    Ianuarie=1, Februarie, Martie, Aprilie, Mai, Iunie, 
    Iulie, August, Septembrie, Octombrie, Noiembrie, Decembrie
}luna;

int main()
{
    zi = Joi;
    luna = Octombrie;
    printf("%d %d", zi, luna);

}
