#include <iostream>
using namespace std;
struct Node {
	int value;
	Node *next;
};

void init(Node *&head);
Node* createNode(int x);
void addFirst(Node *&head, int x);
void output(Node *head);
void addLast(Node *&head, int x);
void addAfter(Node *head, int v, int x);
void Nhapdanhsach(Node *&head, int n);
void deleteFirst(Node *&head);
void deleteLast(Node *&head);
void deleteMode(Node *&head, int v);
Node* Search(Node *head, int x);
void clean(Node *&head);
int main()
{
	int n, x, v;
	Node *head;
	init(head);
	cout << "Nhap n: ";
	cin >> n;
	Nhapdanhsach(head, n);
	cout << "Nhap gia tri can them: ";
	cin >> x;
	cout << "Nhap gia tri v can them vao sau: ";
	cin >> v;
	addAfter(head, v, x);
	output(head);
	cout << "Xoa dau: " << endl;
	deleteFirst(head);
	output(head);
	cout << "Xoa cuoi: " << endl;
	deleteLast(head);
	output(head);
	cout << "Nhap gia tri muon tim: ";
	cin >> v;
	if (Search(head, v) != NULL)
	{
		cout << "Xoa phan tu tim thay ta co danh sach: " << endl;
		deleteMode(head, v);
		output(head);
	}
	else {
		cout << "Gia tri "<< v << " ko co trong danh sach" << endl;
	}
	cout << "Xoa danh sach... " << endl;
	clean(head);
	if (head == NULL)
		cout << "Danh sach rong!" << endl;
	return 0;
}

void init(Node *&head)
{
	head = NULL;
}

Node* createNode (int x) 
{
	Node *p = new Node;
	p->value = x;
	p->next = NULL;
	return p;
}

void addFirst(Node *&head, int x)
{
	Node *p = createNode(x);
	p->next = head;
	head = p;
}

void addLast(Node *&head, int x)
{
	Node *p = createNode(x);
	if (head == NULL)
	{
		head = p;
	}
	else
	{
		Node *last = head;
		while (last->next != NULL)
			last = last->next;
		last->next = p;
	}
	
}

void addAfter(Node *head, int v, int x)
{
	Node *p = createNode(x);
	// Tim node co gia tri la v
	// x la gia tri muon them sau v

	Node *q = head;
	while (q != NULL && q->value != v)
		q = q->next;
	// q la Node dai dien cho v tren danh sach lien ket
	if (q != NULL) // trong danh sach co phan tu gia tri v
	{
		p->next = q->next;
		q->next = p;
	}
}

void Nhapdanhsach(Node *&head, int n)
{
	int x;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan Node thu " << i + 1 << ": ";
		cin >> x;
		//x = rand() % 10;
		addFirst(head, x);
	}
}

void deleteFirst(Node *&head)
{
	if (head != NULL)
	{
		Node *p = head;
		head = p->next;
		p->next = NULL;
		delete(p);
	}
}

void deleteLast(Node *&head)
{
	if (head != NULL)
	{
		// Xác định nút cuối cùng và nút trước của nút cuối cùng
		Node *last = head;
		Node *prev = NULL;
		while (last->next != NULL)
		{
			prev = last;
			last = last->next;
		}
		if (prev == NULL) //danh sach chi co 1 phan tu
		{
			// co the goi ham deleteFirst neu da lam o tren
			//deleteFirst(head);
			if (head != NULL)
			{
				Node *p = head;
				head = p->next;
				p->next = NULL;
				delete(p);
				
			}
		}
		else
		{
			// xoa phan tu cuoi cung
			prev->next = NULL;
			delete(last);
		}
	}
}

void deleteMode(Node *&head, int v) //v la gia tri muon xoa
{
	if (head != NULL)
	{
		Node *p = head;
		Node *prev = NULL;
		while (p!=NULL && p->value != v)
		{
			prev = p;
			p = p->next;
		}
		if (p != NULL) //tim thay pt can xoa
		{
			if (prev == NULL) // danh sach chi co 1 pt
			{
				// co the goi ham deleteFirst neu da lam o tren
				//deleteFirst(head);
				if (head != NULL)
				{
					Node *p = head;
					head = p->next;
					p->next = NULL;
					delete(p);
				}
			}
			else
			{
				prev->next = p->next;
				p->next = NULL;
				delete(p);
			}
		}
		
		
	}
}

Node* Search(Node *head, int x)
{
	Node *p = head;
	while ((p != NULL) && (p->value != x))
		p = p->next;
	return p;
}

void clean(Node *&head)
{
	while (head != NULL)
	{
		deleteFirst(head);
	}
}

void output (Node *head) 
{
	Node *p;
	p = head;
	while (p != NULL)
	{
		cout << p->value << " ";
		p = p->next;
	}
	cout << endl;
}

