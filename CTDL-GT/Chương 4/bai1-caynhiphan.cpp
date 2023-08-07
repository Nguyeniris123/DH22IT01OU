#include <iostream>
using namespace std;
struct Node
{
	int info;
	Node *left;
	Node *right;
};
void tree_empty(Node *&root);
void duyetLNR(Node *p);
void InsertNode(Node *&p, int x);
Node *search(Node *p, int x);
int main()
{
	Node *root;
	int x, n;
	cout << "Nhap so luong can them: ";
	cin >> n;
	tree_empty(root);
	for (int i = 0; i < n; i++)
	{
		x = rand() % 100;
		InsertNode(root, x);
	}
	duyetLNR(root);
	cout << endl;
	cout << "Nhap gia tri can tim: ";
	cin >> x;
	if (search(root, x) == NULL)
		cout << "Khong tim thay" << endl;
	else cout << "Gia tri co trong cay " << endl;
	return 0;
}

void tree_empty(Node *&root)
{
	root = NULL;
}

void InsertNode(Node *&p, int x)
{
	if (p == NULL)
	{
		p = new Node;
		p->info = x;
		p->left = NULL;
		p->right = NULL;
	}
	else
	{
		if (p->info == x)
			return; // đã có node có giá trị x
		else if (p->info > x)
			return InsertNode(p->left, x);
		else
			return InsertNode(p->right, x);
	}
}

void duyetLNR(Node *p)
{
	if (p != NULL)
	{
		duyetLNR(p->left);
		cout << p->info <<" ";
		duyetLNR(p->right);
	}
}

Node *search(Node *p, int x)
{
	if (p != NULL)
	{
		if (p->info == x)
			return p;
		else
			if (x > p->info)
				return search(p->right, x);
			else
				return search(p->left, x);
	}
	return NULL;
}

// ham xoa 1 nut


