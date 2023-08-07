#include <iostream>
using namespace std;
struct Node {
	int value;
	Node *next, *previous;
};

struct DoubleLinkedList {
	Node *head;
	Node *tail;
};

void init(DoubleLinkedList &ls);
Node *createNode(int x);
void addFirst(DoubleLinkedList &ls, int x);
void addLast(DoubleLinkedList &ls, int x);
void addAfter(DoubleLinkedList &ls, int v, int x);
void Nhapdanhsach(DoubleLinkedList &ls, int n);
void deleteFirst(DoubleLinkedList &ls);
void deleteLast(DoubleLinkedList &ls);
void output(const DoubleLinkedList ls);
Node *Search(DoubleLinkedList ls, int x);
int main()
{
	DoubleLinkedList ls;
	init(ls);
	int n, x;
	cout << "Nhap n: ";
	cin >> n;
	Nhapdanhsach(ls, n);
	addLast(ls, 36);
	addAfter(ls, 2, 10);
	deleteFirst(ls);
	deleteLast(ls);
	output(ls);
	cout << "Nhap pt muon tim: ";
	cin >> x;
	if (Search(ls, x) != NULL) 
		cout << "Tim thay" << endl;
	else cout << "Khong tim thay!" << endl;
	return 0;
}

void init(DoubleLinkedList &ls)
{
	ls.head = NULL;
	ls.tail = NULL;
}

Node *createNode (int x) 
{
	Node *p = new Node;
	p->value = x;
	p->next = NULL;
	p->previous = NULL;
	return p;
}

void addFirst(DoubleLinkedList &ls, int x)
{
	Node *p = createNode(x);
	if (ls.head == NULL) // truong hop ds rong
	{
		ls.head = ls.tail = p;
	}
	else
	{
		p->next = ls.head;
		ls.head->previous = p;
		ls.head = p;
	}
}

void addLast(DoubleLinkedList &ls, int x)
{
	Node *p = createNode(x);
	if (ls.head == NULL)
	{
		ls.head = ls.tail = p;
	}
	else
	{
		p->previous = ls.tail;
		ls.tail->next = p;
		ls.tail = p;
	}
	
}

void addAfter(DoubleLinkedList &ls, int v, int x) // v la not duoc them sau them sau
{
	Node *q = ls.head;
	while (q != NULL && q->value != v)
		q = q->next;
	if (q != NULL)
	{
		if (q == ls.tail)
		{
			addLast(ls, x);
		}
		else
		{
			Node *p = createNode(x);
			p->next = q->next;
			q->next->previous = p;

			q->next = p;
			p->previous = q;
		}
	}
}

void Nhapdanhsach(DoubleLinkedList &ls, int n)
{
	int x;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap Node thu " << i + 1 << ": ";
		cin >> x;
		addFirst(ls, x);
	}
}

void deleteFirst(DoubleLinkedList &ls)
{
	if (ls.head != NULL)
	{
		Node *p = ls.head;

		if (p->next == NULL)  // danh sach co 1 pt
		{
			ls.tail = NULL;
			ls.head = NULL;
		}
		else
		{
			ls.head = p->next;
			p->next->previous = NULL;
			p->next = NULL;
		}
		delete(p);
	}
}

void deleteLast(DoubleLinkedList &ls)
{
	if (ls.tail != NULL)
	{
		Node *p = ls.tail;
		ls.tail = ls.tail->previous;
		if (ls.tail != NULL)  // trường hợp ds khác rỗng nào
			ls.tail->next = NULL;
		else // trường hợp ds không còn phần tử nào
			ls.head = NULL;
		delete p;
	}
}

Node *Search( DoubleLinkedList ls,  int x) // tim kiem duyet tu dau ve cuoi
{
	Node *p;
	p = ls.head;
	while ((p != NULL) && ( p->value != x))
		p = p->next;
	return p;
}

void output(const DoubleLinkedList ls) //duyet tu du ve cuoi, muon duyet tu cuoi len dau thi doi head bang last, next bang previous
{
	Node *p = ls.head;
	while (p != NULL)
	{
		cout << p->value << " ";
		p = p->next;
	}
	cout << endl;
}

