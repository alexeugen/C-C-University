#include <iostream>

using namespace std;

int k = 2;

int M[7][7] = {		{0, 0, 1, 0, 0, 0, 0},
					{0, 0, 1, 1, 0, 0, 0},
					{0, 0, 0, 0, 1, 0, 0},
					{0, 0, 0, 1, 1, 0, 0},
					{0, 1, 0, 0, 1, 0, 1},
					{1, 1, 1, 0, 0, 0, 1},
					{1, 1, 1, 0, 0, 1, 1},
				};
int n = 7;

int C[7][7] = {0};

void search(int i, int j)
{
	if(M[i][j] == 1 && !C[i][j])
	{
		M[i][j] = k;
		C[i][j] = 1;
	
		if(i-1>=0)
			search(i-1, j);
		if(j-1>=0)
			search(i, j-1);
		if(i+1<7)
			search(i+1, j); 
		if(j+1<7)
			search(i, j+1); 
	}
}

int main()
{
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			if(M[i][j] && !C[i][j])
			{

				search(i, j);
				k++;
			}
	}	

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<M[i][j]<<" ";
		cout<<endl;
	}	
}