#include <iostream>

using namespace std;

struct nod{
	char data;
	nod *next;
}*head;

nod *new_nod(char data)
{
	nod *temp;
	temp = new nod;
	temp->data = data;
	temp->next = NULL;

	return temp;
}

void af()
{
	nod *temp = head;

	if(head)
	{
	cout<<"varf  ";
	while(temp)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"baza"<<endl;
}
	else
		cout<<"stiva vida\n";
}

void push(char data)
{	
	if(head == NULL)
		head = new_nod(data);
	else
	{
		nod *temp = new_nod(data);
		temp->next = head;
		head = temp;
	}
}

int pop()
{
	if(head)
	{
		char c = head->data;
		nod *temp = head;
		head = head->next;
		delete temp;
		return c;
	}
	else
		return 0;

}

int peek()
{
	if(head)
		return head->data;
	else
		return 0;
}



int main()
{
	char c[]="12213344";
	int n = 8;
	for(int i = 0; i<n; i++)
		if(c[i] == peek())
			pop();
		else
			push(c[i]);

	if(peek())
		cout<<"se intersecteaza\n";
	else
		cout<<"nu se intersecteaza\n";
	return 0;
}