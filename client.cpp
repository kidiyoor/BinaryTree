
#include"header.h"
#include<iostream>
using namespace std;

main()
{
	SList SL;
	int ch;
	int *arr;
	int size;
	while(true)
	{
		cout << "1 insert\n 2. delete\n 3. display\n 4.make a binary tree\n -1. exit"<<endl;
		cin >> ch;
		if(ch==1)
		{
			cout<<"Enter size of array"<<endl;
			cin>>size;
			arr=new int[size];
			for(int i=0;i<size;i++)
			{
				cout << "Enter element"<<endl;
				cin >> arr[i];
			}
			SL.insert(arr,size);
		}
		else if (ch==2)
		{

		}
		else if(ch==3)
		{

		}
		else if(ch=-1)
			break;
	}
	cout << "\nEND" <<endl;

	//t.insert();
}