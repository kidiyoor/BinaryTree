#include"header.h"
#include<iostream>
using namespace std;

Tree::Tree()
:root(NULL)
{

}

Tree::~Tree()
{

}


void Tree::insert(int a[],int b)
{
	Node *n=new Node(a,b);
	if(root==NULL)	
	{
		root=n;
		root->left=NULL;
		root->right=NULL;
		cout << "SUM : "<<root->sum << endl;
	}
	else 
	{
		
	}
}

Node& remove()
{
	
}