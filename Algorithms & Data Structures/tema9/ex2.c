cd#include <iostream>

using namespace std;

struct nod{
	int data;
	nod *next;
	nod *prev;
}*stanga, *dreapta;

nod *new_nod(int data)
{
	nod *temp;
	temp = new nod;
	temp->data = data;
	temp->next = NULL;
	temp->prev = NULL;
	return temp;
}

void push_st(int data)
{
	if(stanga == NULL)
	{
		stanga = new_nod(data);
		dreapta = stanga;
	}
	else
	{
		nod *temp = new_nod(data);
		temp->next = stanga;
		stanga->prev = temp;
		stanga = temp;
	}
}

void push_dr(int data)
{
	if(stanga == NULL)
	{
		stanga = new_nod(data);
		dreapta = stanga;
	}
	else
	{
		nod *temp = new_nod(data);
		temp->prev = dreapta;
		dreapta->next = temp;
		dreapta = temp;
	}
}

void afisare()
{
	nod *temp;
	temp = stanga;

	if(temp == NULL)
		cout<<"coada VIDA";
	else
	while(temp)
	{
		cout<<temp->data;
		temp = temp->next;
	}
}

void pop_st()
{
	if(stanga == NULL)
		cout<<"coada vida";
	else if(stanga->next == NULL)
	{
		stanga = NULL;
		dreapta = NULL;
	}
	else
	{
		stanga = stanga->next;
		delete(stanga->prev);
		stanga->prev = NULL;
	}
}

void pop_dr()
{
	if(dreapta == NULL)
		cout<<"coada vida";
	else if(dreapta->prev == NULL)
	{
		stanga = NULL;
		dreapta = NULL;
	}
	else
	{
		dreapta = dreapta->prev;
		delete(dreapta->next);
		dreapta->next = NULL;
	}
}

int main()
{
	push_st(2);
	push_st(3);
	push_dr(4);
	pop_st();

	pop_dr();
	afisare();
}