#include <iostream>
#include <fstream>

using namespace std;


ifstream fin("date.in");

int a[100][100];
int viz[100] = {0};
int n;

struct nod{
	int data;
	bool viz;
	nod *next;
}*lista[100];

nod *new_nod(int data)
{
	nod *temp = new nod;
	temp->data = data;
	temp->next = NULL;
}

void addn(int i, int j)
{
	nod *temp;
	temp = lista[i];

	while(temp->next)
		temp = temp->next;
	temp->next = new_nod(j);
}

int grad(int i)
{
	nod *temp;
	temp = lista[i];
	int s = 0;
	while(temp->next)
	{
		temp=temp->next;
		s++;
	}
	return s;
}

int w[100], m = 0;

int maxgrad(int n)
{
	int max = 0;
	for(int i = 0; i < n; i++)
	{
		if(grad(i)>max)
		{
			m = 0;
			w[m++] = i;
			max = grad(i);
		}
		else
		if(grad(i)==max)
		{
			w[m++] = i;
		}
	}
		
}

int numarmuchii(int n)
{
	int s = 0;
	for(int i=0; i<n; i++)
		s+=grad(i);
	return s/2;
}
/*
void BFS(int n)
{
	bool *visited = new bool[n];
	nod *queue = new nod[n];
	for(int i = 0; i < n; i++)
        visited[i] = false;
    
    queue[0] = lista[0];

}
*/

void DFS(int i)
{
  
    viz[i] = 1;
    cout<<i<<" ";
    for(int j=1;j<=n;j++)
        if(!viz[j] && a[i][j])
        {
            DFS(j);
        }
}

void BFS(int i)
{
    int coada[1000], stanga = 0, dreapta = 0;
    viz[i]++;
    cout<<i<<" ";
    for(int j=1;j<=n;j++)
        if(a[i][j] && !viz[j])
        {
            coada[dreapta++] = j;
            viz[j]++;
        }
    while(stanga<dreapta)
    {
        BFS(coada[stanga]);
        stanga++;
    }
}
int main()
{
	
	fin>>n;
	

	//CITIRE MATRICE DE ADIACENTA
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			fin>>a[i][j];

	//CREARE LISTA DE ADIACENTA
	for(int i=0; i<n; i++)
	{
		lista[i] = new_nod(i);
		lista[i]->viz = false;
	}
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			if(a[i][j])
				addn(i,j);

	maxgrad(n);
	for(int i=0; i<m; i++)
		cout<<w[i]<<' ';
	cout<<endl;
	cout<<numarmuchii(n)<<endl;
	for(int i=0; i<n; i++)
		if(!viz[i])
			BFS(i);
	cout<<endl;
	
}