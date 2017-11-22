#include <stdio.h>
#include <string.h>

union tiptip{
    int balcon;
    char decomandat;
    char tip_casa[100];
};

struct locuinta{
    char adresa[100];
    int suprafata;
    char tip[30];
    int camere;
    union tiptip x;
};

int main()
{
    struct locuinta loc[100];
    int n;
    scanf("%d", &n);

    int i=0;
    while(i<n)
    {
        printf("adresa%d: ", i);
        scanf("%s", loc[i].adresa); 
    
        printf("supraf%d: ", i);
        scanf("%d", &loc[i].suprafata);
    
        printf("tip%d: ", i);
        scanf("%s", loc[i].tip);
    
        printf("camere%d: ", i);
        scanf("%d", &loc[i].camere);

        if(!strcmp(loc[i].tip,"garsoniera"))
            scanf("%d", &loc[i].x.balcon);
        
        if(!strcmp(loc[i].tip,"apartament"))
            scanf("%c", &loc[i].x.decomandat);
       //ca sa scap de \n
        char c;
        scanf("%c", &c);

        if(!strcmp(loc[i].tip,"casa")) 
            scanf("%[^\n]%*c", loc[i].x.tip_casa);
        i++;
    }
    
    i = 1;
    int smax = 0;
    int pmax;
    int q=0;;
    while(i<n)
    {
        if(loc[i].suprafata > smax && loc[i].x.balcon && !strcmp(loc[i].tip, "garsoniera"))
        {   
            smax = loc[i].suprafata;
            pmax = i;
            q = 1;
        }
        i++;
    }
    if(q)
        printf ("%s",loc[pmax].adresa); 
    return 0;
}
