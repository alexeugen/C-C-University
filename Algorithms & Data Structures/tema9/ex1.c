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

void inorder_k(nod *temp, int i, int k)
{
	if (temp != NULL && i <= k+1)
    {
    	i++;
        inorder_k(temp->left, i, k);
        if(i==k+1)
        	cout<<temp->data<<" ";
        inorder_k(temp->right, i, k);
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
	 /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */

	root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    inorder(root);
    cout<<"\n";
   // deleter(root, 70);
    inorder_k(root, 0, 1);
	
}