#include <iostream>

using namespace std;


int v[] = {8, 3, 5, 1, 7, 6, 13, 18, 17};
int n = 9;
int w[10];
int cn = n;

void max_heapify(int i)
{
	int l = 2*i;
	int r = 2*i + 1;
	int max;
	int aux;

	if(l<n && v[l] > v[i])
		max = l;
	else
		max = i;
	if(r<n && v[r] > v[max])
		max = r;
	if(max != i)
	{	
		int aux = v[i];
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

	if(l<n && v[l] < v[i])
		min = l;
	else
		min = i;
	if(r<n && v[r] < v[min])
		min = r;
	if(min != i)
	{	
		int aux = v[i];
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
		min_heapify(0);
	}
}

int main()
{
	min_heap();
	for(int i = 0; i<n; i++)
		cout<<v[i]<<" ";
	cout<<'\n';
	heap_sort();
	for(int i = 0; i<cn; i++)
		cout<<w[i]<<" ";

	return 0;
}