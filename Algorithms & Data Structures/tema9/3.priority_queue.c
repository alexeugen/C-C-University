#include <iostream>

using namespace std;


struct vheap{
	int val;
	int pon;
};


vheap v[100] = {8,		3,
			 5,		1, 
			 7,		6, 
			 13,	18, 
			 17,	5};



int n = 5;
vheap w[10];
int cn = n;

void max_heapify(int i)
{
	int l = 2*i;
	int r = 2*i + 1;
	int max;
	int aux;

	if(l<n && v[l].pon > v[i].pon)
		max = l;
	else
		max = i;
	if(r<n && v[r].pon > v[max].pon)
		max = r;
	if(max != i)
	{	
		vheap aux = v[i];
		v[i] = v[max];
		v[max] = aux;
		max_heapify(max);
	}
}

void min_heapify(int i)
{
	int l = 2*i;
	int r = 2*i + 1;
	int min;
	int aux;

	if(l<n && v[l].pon < v[i].pon)
		min = l;
	else
		min = i;
	if(r<n && v[r].pon < v[min].pon)
		min = r;
	if(min != i)
	{	
		vheap aux = v[i];
		v[i] = v[min];
		v[min] = aux;
		min_heapify(min);
	}
}

void max_heap()
{
	for(int i = (n-1)/2; i>=0; i--)
		max_heapify(i);
}

void min_heap()
{
	for(int i = (n-1)/2; i>=0; i--)
		min_heapify(i);	
}

void heap_sort()
{
	int k = 0;

	while(k<cn)
	{
		w[k++] = v[0];
		v[0] = v[n-1];
		n--;
		max_heapify(0);
	}
}
*/

void insert(int va, int p)
{
	v[n].val = va;
	v[n].pon = p;
	int i = n;
	n++;
	while(i/2 != 0 && v[i/2].pon < v[i].pon)
	{
		max_heapify(i/2);
		i = i/2;
	}
}

void extract()
{

	v[0] = v[n-1];
	n--;
	max_heapify(0);
}

int main()
{
	
	max_heap();
	for(int i = 0; i<n; i++)
		cout<<v[i].pon<<" ";
	cout<<'\n';
	insert(5, 17);
	for(int i = 0; i<n; i++)
		cout<<v[i].pon<<" ";
	cout<<'\n';
	extract();
	for(int i = 0; i<n; i++)
		cout<<v[i].pon<<" "; 
	cout<<'\n';
	
	
	return 0;
}