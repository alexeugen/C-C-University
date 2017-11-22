#include <iostream>

using namespace std;

struct nod{
	int data;
	nod *next;
}*head;


void func()
{
	nod *temp;
	temp = head;
	temp->data = 5;
}

int main()
{
	head = new nod;
	head->data = 3;
	head->next = NULL;
	func();
	cout<<head->data;
	return 0;
}