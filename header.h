using namespace std;

class NodeL
{
	private:
		NodeL(const int a[],int b);
	public:
		int *array;
		int size;
		int sum;
		NodeL *next;

		int getSum();
		~NodeL();

		friend class SList;

};

class NodeT
{
	private:
		explicit NodeT(const NodeL& a); //explicit required ? tree.cpp line 20
		
	public:
		int *array;
		int size;
		int sum;
		NodeT *left; //reference or pointer ?
		NodeT *right;

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
		void insert(const NodeL &a);
		NodeT& remove(); //doubt return reference ?
		void display() const;

};


class SList
{
	public:
		NodeL *head;

		SList();
		~SList();
		void insert(const int a[],int b);
		NodeL& remove(); 
		void display() const; 

		//TODO
		//Iterator class

};

