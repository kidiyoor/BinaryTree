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
		NodeL *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=n;
		n->next=NULL;
	}
}

void SList::display()
{
	cout<<"#### DISPLAYING SINGLY LIST CONTENT ####";
	NodeL *temp=head;
	while(temp!=NULL)
	{
		cout<<endl<<"SIZE : "<<temp->size<<endl;
		for(int i=0;i<temp->size;i++)
		{
			cout<<temp->array[i]<<" ";
		}
		cout<<endl;
		temp=temp->next;
	}
	cout<<endl;
}

NodeL& SList::remove()
{
	//TODO	
}