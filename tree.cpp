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


void Tree::insert(const NodeL &a)
{
	
	NodeT *n=new NodeT(a);
	if(root==NULL)	
	{
		root=n;
		root->left=NULL;
		root->right=NULL;
	}
	else 
	{
		
	}
	
}

NodeT& Tree::remove()
{
	
}