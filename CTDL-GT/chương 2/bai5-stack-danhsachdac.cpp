#include <iostream>
using namespace std;
#define MAX 100
void init(int a[], int &sp);
bool isEmpty(int a[], int sp);
bool isFull(int a[], int sp);
void Push(int a[], int &sp, int x);
void Pop(int a[], int &sp, int &x);
int main()
{
	int sp, c;
	int a[MAX];
	init(a, sp);
	while (true)
	{
		system("cls");
		cout << "==========Menu==========" << endl
			<< "1. Them 1 phan tu" << endl
			<< "2. Xoa 1 phan tu" << endl
			<< "3. Kiem tra stack rong" << endl
			<< "4. Kiem tra stack day" << endl
			<< "5. Thoat" << endl;
		cout << "Ban chon: ";
		cin >> c;
		switch (c)
		{
		case 1: 
		{
			int x;
			cout << "Nhap gia tri muon them: ";
			cin >> x;
			Push(a, sp, x);
			break;
		}
		case 2:
		{
			int x;
			cout << "Nhap gia tri muon xoa: ";
			cin >> x;
			Pop(a, sp, x);
			break;
		}

		case 3: 
		{
			if (isEmpty(a, sp) == true)
				cout << "Danh sach rong" << endl;
			else cout << "Danh song ko rong" << endl;
			system("pause");
			break;
		}
		case 4: 
		{
			if (isFull(a, sp) == true)
				cout << "Danh sach da day" << endl;
			else cout << "Danh song chua day" << endl;
			system("pause");
			break;
		}
		case 5:
			return 0;
		}
	}
	return 0;
}

void init(int a[], int &sp)
{
	sp = -1;
}

bool isEmpty(int a[], int sp)
{
	if (sp == -1)
		return true;
	return false;
}

bool isFull(int a[], int sp)
{
	if (sp == MAX-1)
		return true;
	return false;
}

void Push(int a[], int &sp, int x)
{
	if (sp < MAX - 1)
	{
		a[++sp] = x;
	}
}

void Pop(int a[], int &sp, int &x)
{
	if (sp != -1)
	{
		x = a[sp--];
	}
}