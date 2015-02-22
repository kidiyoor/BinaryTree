#include"header.h"
using namespace std;
#include<iostream>

NodeT::NodeT(const NodeL& a):
size(a.size),sum(a.sum)
{
	array=new int[a.size];
	for(int i=0;i<a.size;i++)
	{
		array[i]=a.array[i];
	}
	//TODO
	
	//sum=
}


NodeT::~NodeT()
{
	delete [] array;
}

