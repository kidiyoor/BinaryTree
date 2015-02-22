#include"header.h"
#include<iostream>
using namespace std;

SList::SList()
:head(NULL)
{

}

SList::~SList()
{

}


void SList::insert(int a[],int b)
{
	NodeL *n=new NodeL(a,b);
	if(head==NULL)	
	{
		head=n;
		head->next=NULL;
	}
	else 
	{
		//TODO
	}
}

NodeL& SList::remove()
{
	
}