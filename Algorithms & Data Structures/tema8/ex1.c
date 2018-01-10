#include <iostream>

using namespace std;

struct nod{
	int data;
	nod *left, *right;
}*root;


nod *new_nod(int data)
{
	nod *temp = new nod;
    
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

nod *insert(nod *temp, int data)
{
    if(temp == NULL)
 		return new_nod(data);
    
    
    if(data <= temp->data)
    	temp->left = insert(temp->left, data);
    else
   		temp->right = insert(temp->right, data);

   	return temp;
}

int search(nod *temp, int data)
{
	if(temp == NULL)
		return 0;
	if(data == temp->data)
		return 1;
	if(data <=temp->data)
		return search(temp->left, data);

	return search(temp->right, data);
}

int max(nod *temp)
{
	while(temp->right)
		temp = temp->right;
	return temp->data;
}

void inorder(nod *temp)
{
	if (temp != NULL)
    {
        inorder(temp->left);
        cout<<temp->data<<" ";
        inorder(temp->right);
    }
}

void preorder(nod *temp)
{
	if (temp != NULL)
    {
    	cout<<temp->data<<" ";
        inorder(temp->left);
        inorder(temp->right);
    }
}

void postorder(nod *temp)
{
	if (temp != NULL)
    {
        inorder(temp->left);
        inorder(temp->right);
        cout<<temp->data<<" ";
    }
}


int dili(nod *father, nod *son, int d)
{
	if(son->right == NULL && son->left == NULL)
	{
		if(d)
			father->right = NULL;
		else
			father->left = NULL;
	}
	else
	if(son->right && son->left)
	{
		nod *prev;
		if(d)
		{	
			while(son->left)
			{
				prev = son;
				son = son->left;
			}
			father->right->data = son->data;
			delete(son);
			prev->left = NULL;
		}
		else
		{
			while(son->right)
			{
				prev = son;
				son = son->right;
			}
			father->left->data = son->data;
			delete(son);
			prev->right = NULL;
		}
			
	}
	else
		if(son->right == NULL)
		{
			son->data = son->left->data;
			delete(son->left);
			son->left = NULL;
		}
		else
		{
			son->data = son->right->data;
			delete(son->right);
			son->right = NULL;
		}

	



	return 1;
}

int deleter(nod *temp, int data)
{
	if(temp == NULL)
		return 0;
	
	if(temp->left->data == data)
		return dili(temp, temp->left, 0);
	
	if(temp->right->data == data)
		return dili(temp, temp->right, 1);
	
	if(data <=temp->data)
		return deleter(temp->left, data);

	return deleter(temp->right, data);
}



int main()
{
	 

	root = insert(root, 2);
    insert(root, 8);
    insert(root, 5);
    insert(root, 4);
    insert(root, 6);
    insert(root, 9);
    insert(root, 3);
    insert(root, 7);
    inorder(root);
    cout<<"\n";
    deleter(root, 5);
    inorder(root);
	
}