#include"header.h"
using namespace std;
#include<iostream>

Node::Node(int *a,int b):
size(b)
{
	array=new int[b];
	for(int i=0;i<b;i++)
	{
		array[i]=a[i];
	}
	//TODO
	//copy array
	sum=StoreSum(a,b);
}


Node::~Node()
{
	delete [] array;
}

int Node::getSum()
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+array[i];
	}
	return sum;
}

int Node::StoreSum(int arr[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"sum calculated"<<endl;
	return sum;
}