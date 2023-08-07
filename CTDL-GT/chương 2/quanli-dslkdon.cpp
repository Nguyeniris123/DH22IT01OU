#include <iostream>
#include <string>
using namespace std;
struct HocVien {
	int maHv;
	string tenHv;
	int namSinh;
};

struct NodeHv {
	HocVien hv;
	NodeHv *next;
};

void init(NodeHv *&head);
NodeHv* createNode(HocVien x);
void addFirst(NodeHv *&head, HocVien x);
void outputHv(HocVien h);
void output(NodeHv *head);
void NhapHv(HocVien &h, NodeHv *&head, int n);
//void NhapHv(HocVien &h, NodeHv *&head, int n);
int main()
{
	int n;
	HocVien h;
	NodeHv *head;
	init(head);
	cout << "Nhap n: ";
	cin >> n;
	NhapHv(h, head, n);
	output(head);
	return 0;
}

void init(NodeHv *&head)
{
	head = NULL;
}

NodeHv* createNode(HocVien x)
{
	NodeHv *p = new NodeHv;
	p->hv = x;
	p->next = NULL;
	return p;
}

void addFirst(NodeHv *&head, HocVien x)
{
	NodeHv *p = createNode(x);
	p->next = head;
	head = p;
}

void outputHv(HocVien h)
{
	cout << "Ma Hv: " << h.maHv << endl;
	cout << "Ten Hv: " << h.tenHv << endl;
	cout << "Nam sinh Hv: " << h.namSinh << endl;
	cout << "=========================" << endl;
}

void output(NodeHv *head)
{
	NodeHv *p = head;
	while (p != NULL)
	{
		outputHv(p->hv);
		p=p->next;
	}
}

void NhapHv(HocVien &h, NodeHv *&head, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ma hoc vien thu " << i + 1 << ": ";
		cin >> h.maHv;
		cin.ignore();
		cout << "Nhap ten hoc vien thu " << i + 1 << ": ";
		getline(cin, h.tenHv);
		cout << "Nhap nam sinh hoc vien thu " << i + 1 << ": ";
		cin >> h.namSinh;
		cout << endl;
		addFirst(head, h);
	}
}

//void NhapHv(HocVien &h, NodeHv *&head, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		NodeHv *newNode = new NodeHv; // Tạo một node mới
//		cout << "Nhap ma hoc vien thu " << i + 1 << ": ";
//		cin >> newNode->hv.maHv;
//		cin.ignore();
//		cout << "Nhap ten hoc vien thu " << i + 1 << ": ";
//		getline(cin, newNode->hv.tenHv);
//		cout << "Nhap nam sinh hoc vien thu " << i + 1 << ": ";
//		cin >> newNode->hv.namSinh;
//		cout << endl;
//
//		newNode->next = head; // Gán con trỏ next của node mới là head
//		head = newNode; // Cập nhật head để trỏ tới node mới
//	}
//}