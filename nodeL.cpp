#include"header.h"
using namespace std;
#include<iostream>

NodeL::NodeL(int *a,int b):
size(b)
{
	array=new int[b];
	for(int i=0;i<b;i++)
	{
		array[i]=a[i];
	}

}


NodeL::~NodeL()
{
	delete [] array;
}
