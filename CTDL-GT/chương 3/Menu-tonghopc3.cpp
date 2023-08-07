#include <iostream>
using namespace std;
#define MAX 100
struct Node {
	int value;
	Node *next;
};
// DS DAC
void swap(int &a, int &b);
void SelectionSort(int a[], int n);
void InsertionSort(int a[], int n);
void BubbleSort(int a[], int n);
void InterchangeSort(int a[], int n);
void QuickSort(int a[], int left, int right);
void shift(int a[], int i, int n);
void HeapSort(int a[], int n);
int Search(int a[], int n, int x);
int BinarySearch(int a[], int n, int x);
void input(int a[], int n);
void output1(int a[], int n);

//DSLK
void init(Node *&head);
Node* createNode(int x);
void addFirst(Node *&head, int x);
void Nhapdanhsach(Node *&head, int n);
void output2(Node *head);
Node* Search(Node *head, int x);
void InterChangeSort2(Node *head);
int main()
{
	while (true)
	{
		system("cls");
		cout << "1. Danh danh dac" << endl
			<< "2. Danh sach lien ket don" << endl
			<< "0. Thoat!!!" << endl
			<< "Ban chon danh sach nao: ";
		int c;
		cin >> c;
		switch (c)
		{
		case 1:
		{
			int a[MAX];
			int n; // n là tổng số phần tử hiện có trong danh sách
			cout << "Nhap n: ";
			cin >> n;
			input(a, n);
			cout << "Danh sach da luu: ";
			output1(a, n);
			int v;
			cout << "1. Sap xep" << endl
				<< "2. Tim kiem" << endl
				<< "0. Thoat!!!" << endl
				<< "Chon tuong tac: ";
			cin >> v;
			switch (v)
			{
			case 1:
			{
				cout << "1. CHON LUA TRUC TIEP - SELECTION SORT" << endl
					<< "2. CHEN TRUC TIEP - INSERTION SORT" << endl
					<< "3. NOI BOT - BUBBLE SORT" << endl
					<< "4. DOI CHO TRUC TIEP - INTERCHANGE SORT" << endl
					<< "5. PHAN HOACH - QUICK SORT" << endl
					<< "6. HEAP SORT" << endl
					<< "0. Thoat!!!" << endl
					<< "Chon cach sap xep: ";
				int z;
				cin >> z;
				switch (z)
				{
				case 1:
				{
					SelectionSort(a, n);
					break;
				}
				case 2:
				{
					InsertionSort(a, n);
					break;
				}
				case 3:
				{
					BubbleSort(a, n);
					break;
				}
				case 4:
				{
					InsertionSort(a, n);
					break;
				}
				case 5: 
				{
					QuickSort(a, 0, n-1);
					break;
				}
				case 6:
				{
					HeapSort(a, n);
					break;
				}
				case 0:
					cout << "cam on ban da su dung chuong trinh" << endl;
					return 0;
				}
				cout << "Danh sach sau khi sap xep: ";
				output1(a, n);
				system("pause");
				break;
			}
			case 2:
			{
				cout << "1. Tim kiem tuan tu" << endl
					<< "2. Tim kiem nhi phan (Danh sach can sap xep)" << endl
					<< "0. Thoat!!!" << endl
					<< "Chon cach tim kiem: ";
				int q;
				cin >> q;
				switch (q)
				{
				case 1: 
				{
					int x;
					cout << "Nhap gia tri muon tim: ";
					cin >> x;
					int kq = Search(a, n, x);
					if (kq == -1) cout << "Khong tim thay" << endl;
					else cout << "Tim thay gia tri " << x << " tai vi tri " << kq << endl;
					system("pause");
					break;
				}
				case 2:
				{
					int x;
					cout << "Nhap gia tri muon tim: ";
					cin >> x;
					InsertionSort(a, n);
					cout << "Danh sach sau khi sap xep: ";
					output1(a, n);
					int kq = BinarySearch(a, n, x);
					if (kq == -1) cout << "Khong tim thay" << endl;
					else cout << "Tim thay gia tri " << x << " tai vi tri " << kq << endl;
					system("pause");
					break;
				}
				case 0:
					cout << "cam on ban da su dung chuong trinh" << endl;
					return 0;
				}
				break;
			}
			break;
			}
			break;
		}

		case 2:
		{
			Node *head;
			init(head);
			int n;
			cout << "Nhap n: ";
			cin >> n;
			Nhapdanhsach(head, n);
			cout << "Danh sach da luu: " << endl;
			output2(head);
			cout << "1. Sap xep" << endl
				<< "2. Tim kiem" << endl
				<< "0. Thoat!!!" << endl
				<< "Chon tuong tac: ";
			int v;
			cin >> v;
			switch (v)
			{
			case 1: 
			{
				InterChangeSort2(head);
				cout << "Danh sach da luu: " << endl;
				output2(head);
				break;
			}
			case 2: 
			{
				int x;
				cout << "Nhap gia tri tim kiem: ";
				cin >> x;
				if (Search(head, x) != NULL)
					cout << "Tim thay" << endl;
				else cout << "Khong tim thay" << endl;
				break;
			}
			}
			system("pause");
			break;
		}
		case 0:
			cout << "cam on ban da su dung chuong trinh" << endl;
			return 0;
		}
	}
	return 0;
}

void swap(int &a, int &b)
{
	int  c;
	c = a;
	a = b;
	b = c;
}

void SelectionSort(int a[], int n)
{
	int  min_pos, i, j;
	for (i = 0; i<n - 1; i++)
	{
		min_pos = i;
		for (j = i + 1; j<n; j++)
			if (a[j]<a[min_pos])
				min_pos = j; // min_pos là vị trí chứa giá tri hiện nhỏ nhất
		swap(a[min_pos], a[i]);
	}
}

void InsertionSort(int a[], int n)
{
	int x, j;
	for (int i = 1; i<n; i++)
	{
		x = a[i]; // biến x lưu giá trị a[i]
		j = i - 1;
		while (0 <= j && x <a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = x;
	}
}

void BubbleSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; j > i; j--)
			if (a[j - 1] > a[j]) // xét điều kiện phần tử sau nhỏ hơn phần tử trước
				swap(a[j], a[j - 1]); // hoán vị a[j] với a[j-1]

}

void InterchangeSort(int a[], int n)
{
	for (int i = 0; i<n - 1; i++)
		for (int j = i + 1; j<n; j++)
			if (a[i]>a[j])
				swap(a[i], a[j]); // đổi chỗ  a[i] và a[j]
}

void QuickSort(int a[], int left, int right)
{
	int x = a[(left + right) / 2];
	int i = left;
	int j = right;
	while (i<j)
	{
		while (a[i]<x) i++;
		while (a[j]>x) j--;
		if (i <= j) {
			swap(a[i], a[j]);
				i++; j--;
		}
	}
	if (left<j) QuickSort(a, left, j);
	if (i<right) QuickSort(a, i, right);
}

void shift(int a[], int i, int n)
{
	int j = 2 * i + 1;
	if (j >= n) // nếu vị trí j không tồn tại trong danh sách đang xét thì thoát khỏi chương trình
		return;
	if (j + 1 <n) // nếu tồn tại vị trí j+1 trong danh sách đang xét thì thoát khỏi chương trình
		if (a[j]<a[j + 1]) // nếu vị trí j không tồn tại  phần tử a[j] <a[j+1]
			j++;

	if (a[i] >= a[j])
		return;
	else {
		int x = a[i];
		a[i] = a[j];
		a[j] = x;
		shift(a, j, n);
	}
}

void HeapSort(int a[], int n)
{
	int i = n / 2;
	while (i >= 0) // tạo heap ban đầu
	{
		shift(a, i, n - 1);	
		i--;
	}
	int right = n - 1; // right là vị trí cuối Heap đang xét
	while (right>0)
	{
		swap(a[0], a[right]); // hoán vị phần tử a[0] cho phần tử cuối Heap đang xét
		right--; // giới hạn lại phần tử cuối đang xét
		if (right > 0) // Kiểm tra dãy đang xét còn nhiều hơn 1 phần tử
			shift(a, 0, right); // tạo Heap lại tại vị trí 0
	}
}

int Search(int a[], int n, int x)
{
	int i = 0;
	while (i<n && a[i] != x)
		i++;
	if (i < n)
		return i; // x trong danh sách a, và nằm ở vị trí i
	return -1; // không tìm thấy x trong danh sách a;
}

int BinarySearch(int a[], int n, int x)
{
	int left = 0, right = n - 1, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] == x) return mid;
		if (x>a[mid]) left = mid + 1;
		else right = mid - 1;
	}
	return -1; // không tìm thấy x trong danh sách a;
}

void input(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100;
}

void output1(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

// DSLK
void init(Node *&head)
{
	head = NULL;
}

Node* createNode(int x)
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

void Nhapdanhsach(Node *&head, int n)
{
	int x;
	for (int i = 0; i < n; i++)
	{
		x = rand() % 100;
		addFirst(head, x);
	}
}

Node* Search(Node *head, int x)
{
	Node *p = head;
	while ((p != NULL) && (p->value != x))
		p = p->next;
	return p;
}

void output2(Node *head)
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
void InterChangeSort2(Node *head)
{
	Node* p = head;
	Node* q = p->next;
	for (p; p != NULL; p = p->next)
		for (q = p->next; q != NULL; q = q->next)
		{
			if (p->value > q->value)
			{
				int tmp = p->value;
				p->value = q->value;
				q->value = tmp;
			}
		}
}
