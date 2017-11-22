#include <iostream>
#include <stdlib.h>
using namespace std;

struct  nod{
    int data;
    nod *next;
}*head, *tail;

void adi(int data)
{
    nod *temp = new nod;
    
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next=head;
        head = temp;
    }
}

void adf(int data)
{
    nod *temp = new nod;
    
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

void af()
{
    nod *temp = head;

    while(temp)
    {
        cout<<temp->data;
        temp=temp->next;
    }

}

int cv(int val)
{
    nod *temp;
    temp = head;
    int i = 0;
    while(temp)
    {
        i++;
        if(temp->data == val)
            return  i;
        temp = temp->next;
    }
    return -1;
}

int cp(int val)
{
    nod *temp;
    temp = head;
    int i = 0;
    while(temp)
    {
        i+=1;
        if(i == val)
            return temp->data;
        temp = temp->next;
    }
    return -1;
}

int main()
{
    head = new nod;
    tail = new nod;
    head = NULL;
    tail = NULL;

    adi(3);
    adi(4);
    adf(5);
    af();
    cout<<cv(5);
    cout<<cv(4);
    cout<<cp(2);

    cout<<'\n';

}
