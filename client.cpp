
#include"header.h"
#include<iostream>
using namespace std;

main()
{
	Tree t;
	int ch;
	int *arr;
	int size;
	while(true)
	{
		cout << "1 insert 2. delete 3. display -1. exit"<<endl;
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
			t.insert(arr,size);
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
	cout << t.root->sum <<endl;

	//t.insert();
}