using namespace std;

class NodeT
{
	private:
		NodeT(int a[],int b);
		static int StoreSum(int arr[],int size);	
		
	public:
		int *array;
		int size;
		int sum;
		NodeT *left; //reference or pointer ?
		NodeT *right;

		int getSum();

		~NodeT();

	friend class Tree;
};

class Tree
{
	private:
		
	public:
		NodeT *root;
		Tree();
		~Tree();
		void insert(int a[],int b);
		NodeT& remove(); //doubt

};

class NodeL
{
	private:
		NodeL(int a[],int b);
	public:
		int *array;
		int size;
		NodeL *next;

		~NodeL();

		friend class SList;

};

class SList
{
	public:
		NodeL *head;

		SList();
		~SList();
		void insert(int a[],int b);
		NodeL& remove(); 

};

