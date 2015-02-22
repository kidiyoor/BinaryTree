#include"header.h"
using namespace std;
#include<iostream>

NodeL::NodeL(const int *a,int b):
size(b)
{
	array=new int[b];
	for(int i=0;i<b;i++)
	{
		array[i]=a[i];
	}
	sum=getSum();
}


int NodeL::getSum()
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+array[i];
	}
	return sum;
}

NodeL::~NodeL()
{
	delete [] array;
}
