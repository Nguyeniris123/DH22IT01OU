#include <iostream>
using namespace std;
#define MAX 20
//int n;
//int a[MAX][MAX];
//void init();
//void input();
//void output();

struct Node {
	int info;
	Node *link;
};
Node *first[MAX];
int n;
void init();
int main()
{
	init();
	cout << "Nhap so dinh: ";
	cin >> n;
	return 0;
}

//ma tran ke 
//void init()
//{
//	n = 0;
//}
//void input()
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Nhap vao dong thu " << i + 1 << ": ";
//		for (int j = i; j < n; j++)
//		{
//			cin >> a[i][j];
//			a[j][i] = a[i][j];
//		}
//			
//	}
//}
//
//void output()
//{
//	cout << "Mang da luu: ";
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//			cout << a[i][j] << " ";
//		cout << endl;
//	}
//}


// danh sach ke

void init()
{
	for (int i = 0; i < n; i++)
		first[i] = NULL;
}

void insert_first(Node*&f, int x)
{
	Node *p;
	p = new Node;
	p->info = x;
	p->link = f;
	f = p;
}
