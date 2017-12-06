#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nume[30];
    int grupa, nr_note;
    float nota[100];
    float medie;
}stud;

void medie(int n, stud student[])
{
    int i;
    for(i=0;i<n;i++)
    {
        int j;
        for(j=0, j<student[i].nr_note;j++)
            student[i].medie += student[i].nota[j];
        student[i].medie = student[i].medie/student[i].nr_note;
    }
}

void afisare(int n, stud student[])
{
    int i, j;
    for(i=0;i<n;i++)
        printf("%s %f %d", student[i].nume, student[i].medie, student[i].grupa);

}

int cmp_student(const void *x, const void *y)
{
    Stud a,b;
    a = *(stud*)x;
    b = *(stud*)y;
    if(a.medie < b.medie)
        return 1;
    else
        if(a.medie > b.medie)
            return -1;
    return strcmp(a.nume, b.nume);
}

int main()
{
    Stud student[100];
    int i;
    FILE* in;
    in = fopen("date.in", "r");
    while(!feof(in))
    {
        fscanf(in, "%s%d%d", student[i].nume, &student[i].nr_note, &student[i].grupa);
        int j;
        for(j=0;j<student[i].nr_note;j++)
            fscanf(in,"%f", &student[i].nota[j]);
        i++;
    }

    medie(i,student);
    afisare(i, student);
    qsort(student,i,sizeof(student),cmp_student);
    afisare(i, student);
    return 0;
}
