using namespace std;

class Node
{
	private:
		Node(int a[],int b);
		static int StoreSum(int arr[],int size);	
		
	public:
		int *array;
		int size;
		int sum;
		Node *left; //reference or pointer ?
		Node *right;

		int getSum();
			

		Node();
		~Node();

	friend class Tree;
};

class Tree
{
	private:
		
	public:
		Node *root;
		Tree();
		~Tree();
		void insert(int a[],int b);
		Node& remove(); //doubt

};;