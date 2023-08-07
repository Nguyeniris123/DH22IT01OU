#include <iostream>
using namespace std;
struct Node
{
	int info;
	Node *left;
	Node *right;
};
void treeEmpty(Node *&root);
Node *createNode(int x);
void insertNode(Node *&p, int x);
void outputLNR(Node *root);
int main()
{
	Node *root;
	int x, n;
	cin >> n;
	treeEmpty(root);
	for (int i = 0; i < n; i++)
	{
		x = rand() % 100;
		insertNode(root, x);
	}
	outputLNR(root);
	return 0;
}

void treeEmpty(Node *&root)
{
	root = NULL;
}

Node *createNode(int x)
{
	Node *p = new Node;
	p->info = x;
	p->left = NULL;
	p->right = NULL;
	return p;
}

void insertNode(Node *&root, int x)
{
	if (root == NULL)
		root = createNode(x);
	else
	{
		// Tim vi tri can chen
		Node *p = root;
		Node *parent = NULL;
		while (p != NULL && p->info != x)
		{
			parent = p;
			if (p->info > x)
				p = p->left;
			else
				p = p->right;
		}
		//thuc hien chen
		if (p == NULL)
		{
			p = createNode(x);
			if (parent->info < x)
				parent->right = p;
			else
				parent->left = p;
		}
	}
}

void outputLNR(Node *root)
{
	if (root != NULL)
	{
		outputLNR(root->left);
		cout << root->info << " ";
		outputLNR(root->right);
	}
}