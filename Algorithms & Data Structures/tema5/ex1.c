#include <iostream>

using namespace std;

struct nod{
    int data;
    nod *next;
}*head, *tail, *head2, *tail2, *head3;


// AFISARE LISTA 1 *******************************************
void af()
{
    nod *temp;

    temp = head;
    if(temp)
    while(temp)
    {
        cout<<temp->data<<' ';
        temp=temp->next;
    }
    else
        cout<<"Lista goala";
    cout<<'\n';
}

// AFISARE LISTA 2 ******************************************
void af2()
{
    nod *temp;

    temp = head2;
    if(temp)
    while(temp)
    {
        cout<<temp->data<<' ';
        temp= temp->next;
    }
    else
        cout<<"lista 2 goala";
    cout<<'\n';
}


// AFISARE LISTA 3 *****************************************
void af3()
{
    nod *temp;

    temp = head3;
    if(temp)
    while(temp)
    {
        cout<<temp->data<<' ';
        temp= temp->next;
    }
    else
        cout<<"lista 3 goala";
    cout<<'\n';
}


// ADAUGARE LA FINALUL LISTEI 1 ****************************
void adf_ex1(int data)
{
    nod *temp;
    temp = new nod;
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

//ADAUGARE LA FINALUL LISTEI 2 ******************************
void adf_2(int data)
{
    nod *temp;
    temp = new nod;
    temp->data = data;
    temp->next = NULL;
    if(head2 == NULL)
    {
        head2 = temp;
        tail2 = temp;
    }
    else
    {
        tail2->next =  temp;
        tail2 = temp;
    }
}

// INSERARIE MEDIE ARITMETICA in LISTA 1 *********************
void ex1()
{
    nod *temp;
    nod *prev;
    nod *add;

    temp = head->next;
    prev = head;
    while(temp)
    {
        add = new nod;
        add->data = (prev->data + temp->data)/2;
        add->next = temp;
        prev->next = add;
        prev = temp;
        temp= temp->next;
    }
}

// CREARE NOD ************************************************
nod* new_nod(int data)
{
    nod *temp;
    temp = new nod;
    temp->data = data;
    temp->next = NULL;

}


// INSERARE IN LISTA 1 CA SORTAT  **************************
void ex2(nod *temp)
{
    nod *temp2;
    nod *prev;

    temp2 = head;
    if(head == NULL)
    {   
        head = temp;
        tail = temp;
    }
    else
    {
        if(temp2->data >= temp->data)
        {
            temp->next = head;
            head = temp;
        }
        else if(temp->data >= tail->data)
        {
            tail->next = temp;
            tail = temp;
        }
        else
        {
            prev = temp2;
            temp2 = temp2->next;
        
            while(temp2)
            {
                if(temp2->data >= temp->data)
                {   
                    temp->next = temp2;
                    prev->next = temp;
                    break;
                }
                prev = temp2;
                temp2=temp2->next;
            }
        }
    }
}


// REVERSE LIST ********************************************
void ex3()
{  //12345
    nod *temp;
    nod *temp2;
    nod *piv;


    piv = head;

    temp = head->next;
    temp2 = temp->next;

    temp->next = piv;
    piv->next = NULL;

    while(temp2)
    {
        head = temp;
        temp = temp2;
        temp2 = temp2->next;
        temp->next = head;
    }
    
    temp->next = head;
    head = temp;

}

// INTERCLASARE DOUA LISTE ***********************************
void ex4()
{
    nod *temp = head;
    nod *temp2 = head2;

    while(temp2)
    {
        ex2(new_nod(temp2->data));
        temp2 = temp2->next;
    }
}

// SUMA LISTE NUMERE MARI ************************************
void ex5()
{
    nod *temp;
    nod *temp2;
    nod *temp3;
    temp = head;
    temp2 = head2;
    
    int a,b;
    int c = 0;
    
    a = temp->data;
    b = temp2->data;
    head3 = new_nod((a + b + c) % 10);
    c = ((a + b + c) % 10 ) / 10;

    temp3 = head3;
    temp = temp->next;
    temp2 = temp2->next;
    

    while(temp && temp2)
    {
        a = temp->data;
        b = temp2->data;
        temp3->next = new_nod((a + b + c) % 10);
        temp3 = temp3->next;
        c= (a + b + c) / 10;
    
        temp = temp->next;
        temp2 = temp2->next;
    }

    while(temp2)
    {
        b = temp2->data;
        temp3->next = new_nod((b + c) % 10);
        c = (b+c)/10;
        temp3 = temp3->next; 
        temp2 = temp2->next;
    }

}

// PRODUS LISTA CU O CIFRA
void ex6(int c)
{
	nod *temp;
	temp = head;

	int aux=0;
	while(temp)
	{	
		int b = temp->data * c + aux; 
		temp->data = b % 10;
		aux = b / 10;
		temp = temp->next;
	}
	
	if(aux)
	{
		tail->next = new_nod(aux);
		tail= tail->next;
	}

}

void ex7()
{
	nod *temp1 = head;
	nod *temp2 = head2;
	nod *temp3;
	nod *tempi = head3;

	while (temp2)
	{
		int aux = 0;
		
		temp3 = tempi;
		temp1 = head;
		while(temp1)
		{ /*
			nod *temp = new_nod((temp2->data * temp1->data + aux + (temp3->next) ? temp3->next->data : 0) % 10 );
			aux = (temp2->data * temp1->data + aux  + (temp3->next) ? temp3->next->data : 0) / 10; */
			
			if(temp3)
			{
				temp3->data = (temp3->data + temp2->data * temp1->data + aux ) % 10 ;
				aux = (temp3->data + temp2->data * temp1->data + aux ) / 10;
				temp3->next = new_nod(0);
				temp3 = temp3->next;
			}
			else
			{
				if(temp3 == head3)
				{
					head3 = new_nod((temp2->data * temp1->data + aux) % 10);
					aux = (temp2->data * temp1->data + aux) / 10;
					temp3 = head3;
				}
				else
				{
					nod *temp = new_nod((temp2->data * temp1->data + aux) % 10);
					aux = (temp2->data * temp1->data + aux) / 10;
					temp3 = temp;
					temp3=temp3->next;
				}
			}
			cout<<temp3->data;
			temp1 = temp1->next;
		}
		cout<<endl;
		
		temp2 = temp2->next;
		
	}
}

int main()
{
    head = new nod;
    tail = new nod;
    head = NULL;
    tail = NULL;
    head3 = new_nod(0);
    head3 = NULL;
    

  /*  adf_ex1(1);
    adf_ex1(2);
    adf_ex1(3);
    af();
    ex1(); */
 
    ex2(new_nod(1));
     ex2(new_nod(2));
      ex2(new_nod(3));

    adf_2(2);
 //  	adf_2(3);
   
    af();
    af2();

 	ex7();

    af3();
}
