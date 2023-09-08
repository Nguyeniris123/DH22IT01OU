#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
#include<cstdlib>
#define MAX 100
using namespace std;
void menuMain()
{
	cout << "=========== MENU ===========.\n"
		<< "1) Doc file va ghi du lieu vao danh sach dac.\n"
		<< "2) Doc file va ghi du lieu vao danh sach lien ket don.\n"
		<< "3) Doc file va ghi du lieu vao danh sach lien ket doi.\n"
		<< "4) Doc file va ghi du lieu vao Stack.\n"
		<< "5) Doc file va ghi du lieu vao Queue.\n"
		<< "6) Doc file va ghi du lieu vao Tree.\n"
		<< "7) Thoat chuong trinh.\n";
	cout << "=== MOI BAN LUA CHON ===.\n";
}
void menuArray()
{
	cout << "=========== MENU MAIN ==========.\n"
		<< "1) Xuat danh sach sinh vien.\n"
		<< "2) Tim sinh vien co so diem cao nhat.\n"
		<< "3) Tim sinh vien co diem thap nhat.\n"
		<< "4) Sap xep danh sach sinh vien theo thu tu tang dan theo diem so.\n"
		<< "5) Xoa mot sinh vien ra khoi danh sach.\n"
		<< "6) Them sinh vien vao vi tri bat ki trong danh sach.\n"
		<< "7) Tim kiem mot sinh vien thong qua mot ki tu o ten.\n"
		<< "8) Sua thong tin cua mot sinh vien.\n"
		<< "9) Thoat.\n"
		<< "=== MOI BAN LUA CHON ===.\n";
}
void menuList()
{
	cout << "============ MENU LUA CHON ============.\n"
		<< "1) Xuat danh sach sinh vien.\n"
		<< "2) Tim sinh vien co so diem cao nhat.\n"
		<< "3) Tim sinh vien co diem thap nhat.\n"
		<< "4) Sap xep danh sach sinh vien theo thu tu tang dan theo diem so.\n"
		<< "5) Xoa mot sinh vien ra khoi danh sach.\n"
		<< "6) Them sinh vien vao vi tri bat ki trong danh sach.\n"
		<< "7) Tim kiem thong tin sinh vien qua ky tu o ten.\n"
		<< "8) Thoat chuong trinh.\n";
	cout << "=== MOI BAN LUA CHON ===.\n";
}
void menuDoubleList()
{
	cout << "============ MENU LUA CHON ============.\n"
		<< "1) Xuat danh sach sinh vien.\n"
		<< "2) Tim sinh vien co so diem cao nhat.\n"
		<< "3) Tim sinh vien co diem thap nhat.\n"
		<< "4) Sap xep danh sach sinh vien theo thu tu tang dan theo diem so.\n"
		<< "5) Xoa mot sinh vien ra khoi danh sach.\n"
		<< "6) Them sinh vien vao vi tri bat ki trong danh sach.\n"
		<< "7) Tim kiem thong tin sinh vien qua ky tu o ten.\n"
		<< "8) Thoat chuong trinh.\n";
	cout << "=== MOI BAN LUA CHON ===.\n";
}
void menuStack()
{
	cout << "============ MENU LUA CHON ============.\n"
		<< "1) Kiem tra xem stack co rong.\n"
		<< "2) Xuat du lieu luu trong stack.\n"
		<< "3) Them mot sinh vien.\n"
		<< "4) Xuat thong tin sinh vien dau danh sach.\n"
		<< "5) Lay va xoa thong tin cua sinh vien dau danh sach.\n"
		<< "6) Thoat chuong trinh.\n"
		<< "=== MOI BAN LUA CHON ===.\n";
}
void menuQueue()
{
	cout << "========= MENU LUA CHON ==========.\n"
		<< "1) Kiem tra xem queue co rong hay khong.\n"
		<< "2) Xuat danh sach cac sinh vien.\n"
		<< "3) Them mot sinh vien.\n"
		<< "4) Lay va xoa thong tin sinh vien dau danh sach.\n"
		<< "5) Thoat chuong trinh.\n"
		<< "=== MOI BAN LUA CHON ===.\n";
}
void menuTree()
{
	cout << "========= MENU LUA CHON ==========.\n"
		<< "1) Xuat danh sach cac sinh vien.\n"
		<< "2) Xuat danh sach cac sinh vien duyet theo NLR.\n"
		<< "3) Xuat danh sach cac sinh vien duyet theo LNR.\n"
		<< "4) Xuat danh sach cac sinh vien duyet theo RNL.\n"
		<< "5) Them thong tin cua mot sinh vien.\n"
		<< "6) Tim kiem thong tin cua mot sinh vien.\n"
		<< "7) Xoa mot sinh vien khoi danh sach.\n"
		<< "8) Thoat chuong trinh.\n"
		<< "=== MOI BAN LUA CHON ===\n";
}

struct Student {
	char name[30], MSSV[20];
	int day, month, year;
	double point;
};
struct node {
	Student student;
	node* pNext;
};
struct nodeTree
{
	Student data;
	nodeTree* pLeft;
	nodeTree*pRight;
};
struct doubleNode {
	Student student;
	doubleNode* pNext;
	doubleNode* previous;
};
struct list {
	node* pHead;
};
//Danh sách liên kết đôi
struct doubleList {
	doubleNode* pHead;
	doubleNode* pTail;
};
struct Stack {
	node* pTop;
};
struct Queue {
	node* pHead;
	node* pTail;
};
void initializeList(list& l)
{
	l.pHead = 0;
}
void initializeDoubleList(doubleList& l)
{
	l.pHead = NULL;
	l.pTail = NULL;
}
void initializeStack(Stack& s)
{
	s.pTop = NULL;
}
void initializeQueue(Queue& q)
{
	q.pHead = NULL;
	q.pTail = NULL;
}
void initializeTree(nodeTree*& tree)
{
	tree = nullptr;
}
nodeTree* initializeNodeTree(Student x)
{
	nodeTree*p = new nodeTree;
	p->data = x;
	p->pLeft = nullptr;
	p->pRight = nullptr;
	return p;
}
//Đọc file vào mảng
void readFileArray(Student*& a, int& n, ifstream& fileIn)
{
	n = 0;
	fileIn.open("SinhVien.txt", ios_base::in);
	if (fileIn.is_open())
	{
		string s;
		while (!fileIn.eof())
		{
			getline(fileIn, s);
			if (s == "")
				break;
			n++;
		}
		a = new Student[n];
		fileIn.close();
		fileIn.open("SinhVien.txt", ios_base::in);
		if (fileIn.is_open())
		{
			for (int i = 0; i < n; i++)
			{
				fileIn.getline(a[i].name, 30, ',');
				fileIn.getline(a[i].MSSV, 20, ',');
				fileIn >> a[i].day;
				fileIn.ignore();
				fileIn >> a[i].month;
				fileIn.ignore();
				fileIn >> a[i].year;
				fileIn.ignore();
				fileIn >> a[i].point;
				fileIn.ignore();
			}
			fileIn.close();
			cout << "+ Doc file thanh cong.\n";
		}
	}
	else
		cout << "+ Mo file that bai.\n";
}
void outputOneStudent(Student student)
{
	cout << "+ Ho ten:" << student.name << endl;
	cout << "+ MSSV:" << student.MSSV << endl;
	cout << "+ Ngay sinh:";
	if (student.day > 0 && student.day < 10)
		cout << "0" << student.day << "/";
	else
		cout << student.day << "/";
	if (student.month > 0 && student.month < 10)
		cout << "0" << student.month << "/";
	else
		cout << student.month << "/";
	cout << student.year << endl;
	cout << "+ Diem so:" << student.point << endl;
}
void outputArray(Student* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n\t\t Thong tin sinh vien thu " << i + 1 << endl;
		outputOneStudent(a[i]);
	}
}
//Học sinh có điểm cao nhất
Student maxPoint(Student* a, int n)
{
	Student max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max.point < a[i].point)
			max = a[i];
	}
	return max;
}
//Học sinh có điểm thấp nhất
Student minPoint(Student* a, int n)
{
	Student min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i].point < min.point)
			min = a[i];
	}
	return min;
}
void arrange(Student*& a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].point > a[j].point)
			{
				Student stemp = a[i];
				a[i] = a[j];
				a[j] = stemp;
			}
		}
	}
}
//Hàm xóa một học sinh.
void deleteOneStudent(Student*& a, int& n, int index)
{
	for (int i = index; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void inputOneStudent(Student& s)
{
	cin.ignore();
	cout << "+ Nhap ho ten: ";
	cin.getline(s.name, 30);
	cout << "+ Nhap MSSV: ";
	cin >> s.MSSV;
	cout << "+ Nhap ngay thang nam sinh: ";
	cin >> s.day >> s.month >> s.year;
	cout << "+ Nhap vao diem: ";
	cin >> s.point;
}
//Thêm một học sinh
void addOneStudent(Student*& a, int& n, int index, Student s)
{
	Student* b = new Student[n];
	for (int i = 0; i < n; i++)
		b[i] = a[i];
	delete a;
	a = new Student[n + 1];
	for (int i = 0; i < n; i++)
		a[i] = b[i];
	for (int i = n; i > index; i--)
		a[i] = a[i-1];
	a[index-1] = s;
	n++;
}
//Tìm kiếm thông tin một học sinh
void searchInformation(Student* a, int n, Student*& b, char x, int& count)
{
	b = new Student[n];
	count = 0;
	char y = x - 32;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; a[i].name[j] != '\0'; j++)
		{
			if (a[i].name[j] == x || a[i].name[j] == y)
			{
				b[count] = a[i];
				count++;
				break;
			}
		}
	}
}
//Sửa thông tin
void menuFix()
{
	cout << "=== BAN MUON SUA ===.\n"
		<< "1) Ho ten.\n"
		<< "2) Ma so sinh vien.\n"
		<< "3) Ngay thang nam sinh.\n"
		<< "4) Diem so.\n"
		<< "5) Sua toan bo.\n"
		<< "6) Thoat.\n"
		<< "== MOI LUA CHON ==.\n";
}
void fix(Student*& a, int index, int chooseFix)
{
	if (chooseFix == 1)
	{
		cin.ignore();
		cout << "+ Sua lai ho ten:";
		cin.getline(a[index].name, 30);
	}
	if (chooseFix == 2)
	{
		cin.ignore();
		cout << "+ Sua lai MSSV:";
		cin.getline(a[index].MSSV, 20);
	}
	if (chooseFix == 3)
	{
		cout << "+ Sua lai ngay thang nam sinh:";
		cin >> a[index].day >> a[index].month >> a[index].year;
	}
	if (chooseFix == 4)
	{
		cout << "+ Sua lai diem so:";
		cin >> a[index].point;
	}
	if (chooseFix == 5)
	{
		cout << "- Nhap vao cac thong tin muon sua." << endl;
		cin.ignore();
		cout << "+ Nhap ho ten: ";
		cin.getline(a[index].name, 30);
		cout << "+ Nhap MSSV: ";
		cin >> a[index].MSSV;
		cout << "+ Nhap ngay thang nam sinh: ";
		cin >> a[index].day >> a[index].month >> a[index].year;
		cout << "+ Nhap vao diem: ";
		cin >> a[index].point;
	}
}
node* initializeNode(Student x)
{
	node* p = new node;
	p->student = x;
	p->pNext = NULL;
	return p;
}
//Thêm vào cuối danh sách
void addTailList(list& l, node* p)
{
	if (l.pHead == NULL)
		l.pHead = p;
	else
	{
		for (node* i = l.pHead; i != NULL; i = i->pNext)
		{
			node* j = i;
			if (j->pNext == NULL)
			{
				i->pNext = p;
				p->pNext = NULL;
				break;
			}
		}
	}
}
//Đọc file vào danh sách
void readFileList(list& l, int& n, ifstream& fileIn)
{
	fileIn.open("SinhVien.txt", ios_base::in);
	if (fileIn.is_open())
	{
		string s;
		while (!fileIn.eof())
		{
			getline(fileIn, s);
			if (s == "")
				break;
			n++;
		}
		fileIn.close();
		fileIn.open("SinhVien.txt", ios_base::in);
		if (fileIn.is_open())
		{
			Student x;
			for (int i = 0; i < n; i++)
			{
				fileIn.getline(x.name, 30, ',');
				fileIn.getline(x.MSSV, 20, ',');
				fileIn >> x.day;
				fileIn.ignore();
				fileIn >> x.month;
				fileIn.ignore();
				fileIn >> x.year;
				fileIn.ignore();
				fileIn >> x.point;
				fileIn.ignore();
				node* p = initializeNode(x);
				addTailList(l, p);
			}
		}
		fileIn.close();
		cout << "+ Doc file thanh cong.\n";
	}
	else {
		cout << "+ Mo file that bai.\n";
	}
}
void outputList(list l)
{
	int j = 0;
	for (node* i = l.pHead; i != NULL; i = i->pNext)
	{
		cout << "\n\t\t Thong tin sinh vien thu " << j + 1 << endl;
		outputOneStudent(i->student);
		j++;
	}
}
node* maxList(list l)
{
	node* max = l.pHead;
	for (node* i = l.pHead->pNext; i != NULL; i = i->pNext)
	{
		if (i->student.point > max->student.point)
			max = i;
	}
	return max;
}
node* minList(list l)
{
	node* min = l.pHead;
	for (node* i = l.pHead->pNext; i != NULL; i = i->pNext)
	{
		if (i->student.point < min->student.point)
			min = i;
	}
	return min;
}
//Sắp xếp list
void arrangeList(list& l)
{
	for (node* i = l.pHead; i != NULL; i = i->pNext)
	{
		for (node* j = i->pNext; j != NULL; j = j->pNext)
		{
			if (i->student.point > j->student.point)
			{
				Student stemp = i->student;
				i->student = j->student;
				j->student = stemp;
			}
		}
	}
}
void deleteHeadStudentList(list& l, int& n)
{
	if (l.pHead == NULL)
		return;
	else
	{
		node* i = l.pHead;
		l.pHead = l.pHead->pNext;
		delete i;
	}
	n--;
}
void deleteTailStudentList(list& l, int& n)
{
	if (l.pHead == NULL)
		return;
	node* g = l.pHead;
	for (node* i = l.pHead; i != NULL; i = i->pNext)
	{
		if (i->pNext == NULL)
		{
			delete i;
			g->pNext = NULL;
			break;
		}
		g = i;
	}
	n--;
}
//Xóa một học sinh khỏi danh sách
void deleteStudentList(list& l, int& n, int chooseStudent)
{
	int j = 2;
	node* g = l.pHead;
	for (node* i = l.pHead->pNext; i != NULL; i = i->pNext)
	{
		if (chooseStudent == j)
		{
			g->pNext = i->pNext;
			delete i;
			break;
		}
		j++;
		g = i;
	}
	n--;
}
void addList(list& l, int& n, node* p)
{
	addTailList(l, p);
	n++;
}
//Tìm kiêm học sinh dựa vào tên.
void searchStudentList(list l, list& b, int& count, char x)
{
	for (node* i = l.pHead; i != NULL; i = i->pNext)
	{
		for (int j = 0; i->student.name[j] != '\0'; j++)
		{
			if (i->student.name[j] == x || i->student.name[j] == x - 32)
			{
				Student s = i->student;
				node* p = initializeNode(s);
				addTailList(b, p);
				count++;
				break;
			}
		}
	}
}
doubleNode* initializeDoubleNode(Student x)
{
	doubleNode* p = new doubleNode;
	p->student = x;
	p->pNext = NULL;
	p->previous = NULL;
	return p;
}
void addTailDoubleList(doubleList& l, doubleNode* p)
{
	if (l.pHead == NULL)
		l.pHead = l.pTail = p;
	else
	{
		l.pTail->pNext = p;
		p->previous = l.pTail;
		l.pTail = p;
	}
}
void readFileDoubleList(doubleList& l, int& n, ifstream& fileIn)
{
	fileIn.open("SinhVien.txt", ios_base::in);
	if (fileIn.is_open())
	{
		string s;
		while (!fileIn.eof())
		{
			getline(fileIn, s);
			if (s == "")
				break;
			n++;
		}
		fileIn.close();
		fileIn.open("SinhVien.txt", ios_base::in);
		if (fileIn.is_open())
		{
			for (int i = 0; i < n; i++)
			{
				Student x;
				fileIn.getline(x.name, 30, ',');
				fileIn.getline(x.MSSV, 20, ',');
				fileIn >> x.day;
				fileIn.ignore();
				fileIn >> x.month;
				fileIn.ignore();
				fileIn >> x.year;
				fileIn.ignore();
				fileIn >> x.point;
				fileIn.ignore();
				doubleNode* p = initializeDoubleNode(x);
				addTailDoubleList(l, p);
			}
		}
		fileIn.close();
		cout << "+ Mo file thanh cong.\n";
	}
	else
		cout << "+ Mo file that bai.\n";
}
void outputDoubleList(doubleList l)
{
	int j = 1;
	for (doubleNode* i = l.pHead; i != NULL; i = i->pNext)
	{
		cout << "\n\t\t Sinh vien thu " << j << endl;
		outputOneStudent(i->student);
		j++;
	}
}
doubleNode* maxDoubleList(doubleList l)
{
	doubleNode* max = l.pHead;
	for (doubleNode* i = l.pHead->pNext; i != NULL; i = i->pNext)
	{
		if (i->student.point > max->student.point)
			max = i;
	}
	return max;
}
doubleNode* minDoubleList(doubleList l)
{
	doubleNode* min = l.pHead;
	for (doubleNode* i = l.pHead->pNext; i != NULL; i = i->pNext)
	{
		if (i->student.point < min->student.point)
			min = i;
	}
	return min;
}
void arrangeDoubleList(doubleList& l)
{
	for (doubleNode* i = l.pHead; i != NULL; i = i->pNext)
	{
		for (doubleNode* j = i->pNext; j != NULL; j = j->pNext)
		{
			if (i->student.point > j->student.point)
			{
				Student stemp = i->student;
				i->student = j->student;
				j->student = stemp;
			}
		}
	}
}
void deleteHeadDoubleList(doubleList& l, int& n)
{
	if (l.pHead == NULL)
		return;
	doubleNode* i = l.pHead;
	l.pHead = l.pHead->pNext;
	delete i;
	l.pHead->previous = NULL;
	n--;
}
void deleteTailDoubleList(doubleList& l, int& n)
{
	if (l.pHead == NULL)
		return;
	doubleNode* g = l.pHead;
	for (doubleNode* i = l.pHead->pNext; i != NULL; i = i->pNext)
	{
		if (i == l.pTail)
		{
			l.pTail = g;
			delete i;
			l.pTail->pNext = NULL;
			break;
		}
		g = i;
	}
	n--;
}
void deleteElementDoubleList(doubleList& l, int index, int& n)
{
	if (l.pHead == NULL)
		return;
	doubleNode* g = l.pHead;
	int j = 2;
	for (doubleNode* i = l.pHead->pNext; i != NULL; i = i->pNext)
	{
		if (j == index)
		{
			//doubleNode* k = i;
			g->pNext = i->pNext;
			i->pNext->previous = g;
			delete i;
			break;
		}
		g = i;
		j++;
	}
	n--;
}
void addStudentDoubleList(doubleList& l, int index, int& n, doubleNode* p)
{
	if (l.pHead == NULL)
		return;
	int j = 1;
	doubleNode* g = new doubleNode;
	for (doubleNode* i = l.pHead; i != NULL; i = i->pNext)
	{
		if (index == 1)
		{
			p->pNext = l.pHead;
			l.pHead->previous = p;
			l.pHead = p;
			break;
		}
		if (index == n + 1)
		{
			addTailDoubleList(l, p);
			break;
		}
		if (j == index)
		{
			p->pNext = i;
			g->pNext = p;
			i->previous = p;
			break;
		}
		j++;
		g = i;
	}
	n++;
}
void searchStudentDoubleList(doubleList l, doubleList& b, int& count, char x)
{
	for (doubleNode* i = l.pHead; i != NULL; i = i->pNext)
	{
		for (int j = 0; i->student.name[j] != '\0'; j++)
		{
			if (i->student.name[j] == x || i->student.name[j] == x - 32)
			{
				Student s = i->student;
				doubleNode* p = initializeDoubleNode(s);
				addTailDoubleList(b, p);
				count++;
				break;
			}
		}
	}
}
void push(Stack& s, node* p)
{
	if (s.pTop == NULL)
		s.pTop = p;
	else
	{
		p->pNext = s.pTop;
		s.pTop = p;
	}
}
void readFileStack(Stack& s, int& n, ifstream& fileIn)
{
	fileIn.open("SinhVien.txt", ios_base::in);
	if (fileIn.is_open())
	{
		string str;
		while (!fileIn.eof())
		{
			getline(fileIn, str);
			if (str == "")
				break;
			n++;
		}
		fileIn.close();
		fileIn.open("SinhVien.txt", ios_base::in);
		if (fileIn.is_open())
		{
			for (int i = 0; i < n; i++)
			{
				Student x;
				fileIn.getline(x.name, 30, ',');
				fileIn.getline(x.MSSV, 20, ',');
				fileIn >> x.day;
				fileIn.ignore();
				fileIn >> x.month;
				fileIn.ignore();
				fileIn >> x.year;
				fileIn.ignore();
				fileIn >> x.point;
				fileIn.ignore();
				node* p = initializeNode(x);
				push(s, p);
			}
		}
		fileIn.close();
		cout << "+ Mo file thanh cong.\n";
	}
	else
		cout << "+ Mo file that bai.\n";
}
void outputStack(Stack s)
{
	node* i = s.pTop;
	int j = 1;
	while (i != NULL)
	{
		cout << "\n\t\t Thong tin sinh vien thu " << j << endl;
		outputOneStudent(i->student);
		j++;
		i = i->pNext;
	}
}
bool isEmty(Stack s)
{
	if (s.pTop == NULL)
		return true;
	return false;
}
void addOneStudentStack(Stack& s, node* p)
{
	if (isEmty(s))
		s.pTop = p;
	else
	{
		p->pNext = s.pTop;
		s.pTop = p;
	}
}
void pop(Stack& s, Student& x)
{
	if (isEmty(s))
		return;
	else
	{
		x = s.pTop->student;
		node* i = s.pTop;
		s.pTop = s.pTop->pNext;
		delete i;
	}
}
void inputHeadStack(Stack s)
{
	if (isEmty(s))
		return;
	else
	{
		outputOneStudent(s.pTop->student);
	}
}
bool isEmpty(Queue q)
{
	if (q.pHead == NULL)
		return true;
	return false;
}
void push(Queue& q, node* p)
{
	if (q.pHead == NULL)
		q.pHead = q.pTail = p;
	else
	{
		q.pTail->pNext = p;
		q.pTail = p;
	}
}
void readFileQueue(Queue& q, int& n, ifstream& fileIn)
{
	fileIn.open("SinhVien.txt", ios_base::in);
	if (fileIn.is_open())
	{
		string s;
		while (!fileIn.eof())
		{
			getline(fileIn, s);
			if (s == "")
				break;
			n++;
		}
		fileIn.close();
		fileIn.open("SinhVien.txt", ios_base::in);
		if (fileIn.is_open())
		{
			for (int i = 0; i < n; i++)
			{
				Student x;
				fileIn.getline(x.name, 30, ',');
				fileIn.getline(x.MSSV, 20, ',');
				fileIn >> x.day;
				fileIn.ignore();
				fileIn >> x.month;
				fileIn.ignore();
				fileIn >> x.year;
				fileIn.ignore();
				fileIn >> x.point;
				fileIn.ignore();
				node* p = initializeNode(x);
				push(q, p);
			}
		}
		fileIn.close();
		cout << "+ Ghi file thanh cong.\n";
	}
	else
		cout << "+ Mo file that bai.\n";
}
void outputQueue(Queue q)
{
	node* i = q.pHead;
	int j = 1;
	while (i != nullptr)
	{
		cout << "\n\t\t Thong tin sinh vien thu " << j << endl;
		outputOneStudent(i->student);
		i = i->pNext;
		j++;
	}
}
void addOneStudentQueue(Queue& q, node* p)
{
	if (isEmpty(q))
		return;
	push(q, p);
}
void pop(Queue& q, Student& x)
{
	if (isEmpty(q))
		return;
	x = q.pHead->student;
	node* i = q.pHead;
	q.pHead = q.pHead->pNext;
	delete i;
}
bool checkLength(char a[30], char b[30])
{
	for (int i = 0; b[i] != '\0'; i++)
	{
		if (a[i]>b[i])
			return true;
	}
	return false;
}
void addElementTree(nodeTree*& tree, nodeTree* p)
{
	if (tree == nullptr)
		tree = p;
	else
	{
		if (checkLength(tree->data.MSSV, p->data.MSSV))
			addElementTree(tree->pLeft, p);
		else if (!checkLength(tree->data.MSSV, p->data.MSSV))
			addElementTree(tree->pRight, p);
		else
			return;
	}
}
void readFileTree(nodeTree*& tree, int& n, ifstream& fileIn)
{
	fileIn.open("SinhVien.txt", ios_base::in);
	if (fileIn.is_open())
	{
		string s;
		while (!fileIn.eof())
		{
			getline(fileIn, s);
			if (s == "")
				break;
			n++;
		}
		fileIn.close();
		fileIn.open("SinhVien.txt", ios_base::in);
		if (fileIn.is_open())
		{
			for (int i = 0; i < n; i++)
			{
				Student x;
				fileIn.getline(x.name, 30, ',');
				fileIn.getline(x.MSSV, 20, ',');
				fileIn >> x.day;
				fileIn.ignore();
				fileIn >> x.month;
				fileIn.ignore();
				fileIn >> x.year;
				fileIn.ignore();
				fileIn >> x.point;
				fileIn.ignore();
				nodeTree* p = initializeNodeTree(x);
				addElementTree(tree, p);
			}
		}
		fileIn.close();
		cout << "+ Doc file thanh cong.\n";
	}
	else
		cout << "+ Mo file that bai.\n";
}
void NLR(nodeTree* tree)
{
	if (tree == nullptr)
		return;
	else
	{
		cout << "\n\t\t Thong tin sinh vien "<< endl;
		outputOneStudent(tree->data);
		NLR(tree->pLeft);
		NLR(tree->pRight);
	}
}
//Duyet tu nho den lon dua vao MSSV
void LNR(nodeTree* tree)
{
	if (tree == nullptr)
		return;
	else
	{
		LNR(tree->pLeft);
		cout << "\n\t\t Thong tin sinh vien " << endl;
		outputOneStudent(tree->data);
		LNR(tree->pRight);
	}
}
//Duyet tu lon den nho dua vao MSSV
void RNL(nodeTree* tree)
{
	if (tree == nullptr)
		return;
	else
	{
		RNL(tree->pRight);
		cout << "\n\t\t Thong tin sinh vien " << endl;
		outputOneStudent(tree->data);
		RNL(tree->pLeft);
	}
}
//Them thong tin cua mot sinh vien
void addOneStudentTree(nodeTree* tree, nodeTree* p)
{
	addElementTree(tree, p);
}
//Tim kiem thong tin sinh vien dua vao MSSV
int checkMSSV(char a[30], char b[30])
{
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] > b[i])
			return 1;
		if (a[i] < b[i])
			return 2;
	}
	return 0;
}
nodeTree* searchTree(nodeTree* tree, char x[30])
{
	if (tree == nullptr)
		return nullptr;
	else
	{
		if (checkMSSV(tree->data.MSSV, x) == 1)
			searchTree(tree->pLeft, x);
		else if (checkMSSV(tree->data.MSSV, x) == 2)
			searchTree(tree->pRight, x);
		else
			return tree;
	}
}
//Xoa mot sinh vien ra khoi danh sach trong cay
//Duyệt kiếm node nhỏ nhất của nhánh bên phải
void searchNodeLeftOfBranchRight(nodeTree*&x,nodeTree*&del)
{
	if (x->pLeft != nullptr)//Nếu mà phía bên trái còn node thì vẫn tiếp tục duyệt
		searchNodeLeftOfBranchRight(x->pLeft, del);
	else
	{
		del->data = x->data;//Cập nhật data của node cần xóa
		del = x;//Cho trỏ đến node thế mạng
		x = x->pRight;//Cập nhật giá trị mới cho node thế mạng
	}
}
void deleteOneStudentTree(nodeTree* &tree, char x[MAX])
{
	if (tree == nullptr)
		return;
	else
	{
		if (checkMSSV(tree->data.MSSV, x) == 1)
			deleteOneStudentTree(tree->pLeft, x);
		else if (checkMSSV(tree->data.MSSV, x) == 2)
			deleteOneStudentTree(tree->pRight, x);
		else
		{
			nodeTree* del = tree;
			if (tree->pLeft == NULL)//Nếu có một node con bên phải
				tree = tree->pRight;
			else if (tree->pRight == NULL)//Nếu có một node con bên trái
				tree = tree->pLeft;
			else//Nếu có cả hai node con
				searchNodeLeftOfBranchRight(tree->pRight, del);//Tìm node trái nhất của cây con phải
			delete del;
		}
	}
}
int main()
{
	int choose1;
	int n;
	do
	{
		system("cls");
		menuMain();
		 ;
		do
		{
			cout << "- Nhap vao cau truc du lieu ma ban muon luu du lieu vao:";
			cin >> choose1;
			if (choose1 < 1 || choose1 > 7)
				cout << "Nhap khong hop le! Moi nhap lai.\n";
		} while (choose1 < 1 || choose1 > 7);
		if (choose1 == 1)
		{
			Student* a = 0;
			int choose2;
			ifstream fileIn;
			n = 0;
			readFileArray(a, n, fileIn);
			// ;
			do
			{
				system("cls");
				menuArray();
				// ;
				do
				{
					cout << "- Nhap vao chuc nang ban muon su dung:";
					cin >> choose2;
					if (choose2 < 1 || choose2>9)
						cout << "Nhap khong hop le! Moi nhap lai.\n";
				} while (choose2 < 1 || choose2 > 9);
				if (choose2 == 1)
				{
					cout << "\n\t\t\t THONG TIN SINH VIEN " << endl;
					outputArray(a, n);
					 ;
				}
				else if (choose2 == 2)
				{
					cout << "\n\t\t Thong tin sinh vien cao diem nhat." << endl;
					Student s = maxPoint(a, n);
					outputOneStudent(s);
					 ;
				}
				else if (choose2 == 3)
				{
					cout << "\n\t\t Thong tin sinh vien thap diem nhat." << endl;
					Student s = minPoint(a, n);
					outputOneStudent(s);
					 ;
				}
				else if (choose2 == 4)
				{
					arrange(a, n);
					cout << "+ Sap xep thanh cong.\n";
					 ;
				}
				else if (choose2 == 5)
				{
					int index;
					cout << "+ Ban muon xoa sinh vien thu may:";
					cin >> index;
					if (index < 1 && index >n)
						cout << "+ Khong tim thay sinh vien muon xoa." << endl;
					else
					{
						deleteOneStudent(a, n, index - 1);
						cout << "+ Xoa thanh cong.\n";
					}
					 ;
				}
				else if (choose2 == 6)
				{
					Student s;
					cout << "- Nhap vao thong tin sinh vien ma ban muon them." << endl;
					inputOneStudent(s);
					int index;
					do
					{
						cout << "- Nhap vao vi tri ban muon them:";
						cin >> index;
						if (index < 1 || index > n + 1)
							cout << "- Nhap khong hop le! Moi nhap lai." << endl;
					} while (index<1 || index>n + 1);
					addOneStudent(a, n, index, s);
					cout << "+ Them thanh cong.\n";
					 ;
				}
				else if (choose2 == 7)
				{
					cout << "=== BAN MUON TIM KIEM THEO CACH NAO ===.\n"
						<< "1) Nhap tu ban phim mot ky tu roi tim kiem.\n"
						<< "2) Random mot ky tu.\n"
						<< "== MOI BAN LUA ==.\n";
					int choose;
					do
					{
						cout << "+ Nhap vao lua chon:";
						cin >> choose;
						if (choose < 1 || choose>2)
							cout << "Nhap khong hop le! Moi nhap lai.\n";
					} while (choose < 1 || choose>2);
					int count;
					Student* b = NULL;
					if (choose == 1)
					{
						char x;
						cout << "- Nhap vao ki tu muon tim:";
						cin >> x;
						searchInformation(a, n, b, x, count);
						if (count == 0)
							cout << "+ Khong co sinh vien nao co ky tu " << x << " trong ten.\n";
						else
						{
							cout << "\n\t\t\t Thong tin cac sinh vien co ky tu " << x << " trong ten la." << endl;
							outputArray(b, count);
						}
						 ;
					}
					else if (choose == 2)
					{
						int z = rand() % (122 - 97 + 1) + 97;
						char x = (int)z;//Cach ep kieu
						searchInformation(a, n, b, z, count);
						if (count == 0)
							cout << "+ Khong co sinh vien nao co ky tu " << x << " trong ten.\n";
						else
						{
							cout << "\n\t\t\t Thong tin cac sinh vien co ky tu " << x << " trong ten la." << endl;
							outputArray(b, count);
						}
						 ;
					}
				}
				else if (choose2 == 8)
				{
					int chooseFix;
					int chooseStudent;
					do
					{
						cout << "+ Ban muon sua sinh vien thu may:";
						cin >> chooseStudent;
						if (chooseStudent<1 || chooseStudent>n)
							cout << "Nhap khong hop le! Moi nhap lai.\n";
					} while (chooseStudent<1 || chooseStudent>n);
					do
					{
						system("cls");
						menuFix();
						 ;
						do
						{
							cout << "+ Nhap vao thong tin ban muon sua:";
							cin >> chooseFix;
							if (chooseFix < 1 || chooseFix > 6)
								cout << "+ Nhap khong hop le! Moi nhap lai.\n";
						} while (chooseFix < 1 || chooseFix > 6);
						if (chooseFix > 0 && chooseFix < 6)
						{
							fix(a, chooseStudent - 1, chooseFix);
							cout << "+ Xua thanh cong.\n";
						}
						 ;
					} while (chooseFix > 0 && chooseFix < 6);
				}
				else
				{
					cout << "=== CAM ON BAN DA SU DUNG CHUONG TRINH CUA CHUNG TOI ===.\n";
					delete a;
				}
			} while (choose2 > 0 && choose2 < 9);
		}
		else if (choose1 == 2)
		{
			list l;
			initializeList(l);
			ifstream fileIn;
			n = 0;
			readFileList(l, n, fileIn);
			 ;
			int choose3;
			do
			{
				system("cls");
				menuList();
				 ;
				do
				{
					cout << "- Nhap vao chuc nang ban muon su dung:";
					cin >> choose3;
					if (choose3 < 1 || choose3 > 9)
						cout << "Nhap khong hop le! Moi nhap lai.\n";
				} while (choose3 < 1 || choose3 > 9);
				if (choose3 == 1)
				{
					cout << "\n\t\t\t Thong tin cac sinh vien la.\n";
					outputList(l);
					 ;
				}
				else if (choose3 == 2)
				{
					cout << "\n\t\t Thong tin sinh vien co so diem cao nhat.\n";
					node* max = maxList(l);
					outputOneStudent(max->student);
					 ;
				}
				else if (choose3 == 3)
				{
					cout << "\n\t\t Thong tin sinh vien co so diem thap nhat.\n";
					node* min = minList(l);
					outputOneStudent(min->student);
					 ;
				}
				else if (choose3 == 4)
				{
					arrangeList(l);
					cout << "+ Sap xep thanh cong.\n";
					 ;
				}
				else if (choose3 == 5)
				{
					int chooseDelete;
					cout << "+ Ban muon xoa hoc sinh so may:";
					cin >> chooseDelete;
					if (chooseDelete == 1)
						deleteHeadStudentList(l, n);
					else if (chooseDelete == n)
						deleteTailStudentList(l, n);
					else if (chooseDelete > 1 && chooseDelete < n)
						deleteStudentList(l, n, chooseDelete);
					else
						cout << "+ Khong tim thay sinh vien muon xoa.\n";
					if (chooseDelete > 0 && chooseDelete < n + 1)
						cout << "+ Xoa thanh cong.\n";
					 ;
				}
				else if (choose3 == 6)
				{
					Student s;
					cout << "- Nhap vao thong tin cua sinh vien ban can them:" << endl;
					inputOneStudent(s);
					node* p = initializeNode(s);
					addList(l, n, p);
					cout << "+ Them thanh cong.\n";
					 ;
				}
				else if (choose3 == 7)
				{
					cout << "=== BAN MUON TIM KIEM THEO CACH NAO ===.\n"
						<< "1) Nhap tu ban phim mot ky tu roi tim kiem.\n"
						<< "2) Random mot ky tu.\n"
						<< "== MOI BAN LUA ==.\n";
					int choose;
					do
					{
						cout << "+ Nhap vao lua chon:";
						cin >> choose;
						if (choose < 1 || choose>2)
							cout << "Nhap khong hop le! Moi nhap lai.\n";
					} while (choose < 1 || choose>2);
					int count = 0;
					list b;
					initializeList(b);
					if (choose == 1)
					{
						cout << "+ Moi ban nhap mot ky tu de tim kiem:";
						char x;
						cin >> x;
						searchStudentList(l, b, count, x);
						if (count == 0)
							cout << "+ Khong co sinh vien nao co ky tu " << x << " trong ten.\n";
						else
						{
							cout << "\n\t\t Thong tin cac sinh vien co ky tu " << x << " trong ten la." << endl;
							outputList(b);
						}
					}
					else
					{
						int c = rand() % (122 - 97 + 1) + 97;
						char x = (int)c;
						searchStudentList(l, b, count, x);
						if (count == 0)
							cout << "+ Khong co sinh vien nao co ky tu " << x << " trong ten.\n";
						else
						{
							cout << "\n\t\t Thong tin cac sinh vien co ky tu " << x << " trong ten la." << endl;
							outputList(b);
						}
					}
					 ;
				}
				else
					cout << "=== CAM ON BAN DA SU DUNG ===" << endl;
			} while (choose3 > 0 && choose3 < 8);
		}
		else if (choose1 == 3)
		{
			doubleList l;
			initializeDoubleList(l);
			ifstream fileIn;
			n = 0;
			readFileDoubleList(l, n, fileIn);
			 ;
			int choose4;
			do
			{
				system("cls");
				menuList();
				 ;
				do
				{
					cout << "- Nhap vao chuc nang ban muon su dung:";
					cin >> choose4;
					if (choose4 < 1 || choose4 > 9)
						cout << "Nhap khong hop le! Moi nhap lai.\n";
				} while (choose4 < 1 || choose4 > 9);
				if (choose4 == 1)
				{
					cout << "\n\t\t\t Thong tin cac sinh vien." << endl;
					outputDoubleList(l);
					 ;
				}
				else if (choose4 == 2)
				{
					cout << "\n\t\t Thong tin sinh vien co diem so cao nhat" << endl;
					doubleNode* max = maxDoubleList(l);
					outputOneStudent(max->student);
					 ;
				}
				else if (choose4 == 3)
				{
					cout << "\n\t\t Thong tin sinh vien co diem so cao nhat" << endl;
					doubleNode* min = minDoubleList(l);
					outputOneStudent(min->student);
					 ;
				}
				else if (choose4 == 4)
				{
					arrangeDoubleList(l);
					cout << "+ Sap xep thanh cong.\n";
					 ;
				}
				else if (choose4 == 5)
				{
					int index;
					cout << "+ Ban muon xoa hoc sinh thu may:";
					cin >> index;
					if (index == 1)
						deleteHeadDoubleList(l, n);
					else if (index == n)
						deleteTailDoubleList(l, n);
					else
						deleteElementDoubleList(l, index, n);
					if (index > 0 && index <= n)
						cout << "+ Xoa thanh cong.\n";
					else
						cout << "+ Khong tim thay hoc sinh can xoa.\n";
					 ;
				}
				else if (choose4 == 6)
				{
					int index;
					Student s;
					cout << "+ Ban muon them vao hoc sinh vao vi tri thu may:";
					cin >> index;
					cout << "- Nhap vao thong tin cua hoc sinh can them." << endl;
					inputOneStudent(s);
					doubleNode* p = initializeDoubleNode(s);
					addStudentDoubleList(l, index, n, p);
					if (index > 0 && index <= n + 1)
						cout << "+ Them thanh cong.\n";
					else
						cout << "+ Vi tri can them khong phu hop.\n";
					 ;
				}
				else if (choose4 == 7)
				{
					cout << "=== BAN MUON TIM KIEM THEO CACH NAO ===.\n"
						<< "1) Nhap tu ban phim mot ky tu roi tim kiem.\n"
						<< "2) Random mot ky tu.\n"
						<< "== MOI BAN LUA ==.\n";
					int choose;
					do
					{
						cout << "+ Nhap vao lua chon:";
						cin >> choose;
						if (choose < 1 || choose>2)
							cout << "Nhap khong hop le! Moi nhap lai.\n";
					} while (choose < 1 || choose>2);
					int count = 0;
					doubleList b;
					initializeDoubleList(b);
					if (choose == 1)
					{
						cout << "+ Moi ban nhap mot ky tu de tim kiem:";
						char x;
						cin >> x;
						searchStudentDoubleList(l, b, count, x);
						if (count == 0)
							cout << "+ Khong co sinh vien nao co ky tu " << x << " trong ten.\n";
						else
						{
							cout << "\n\t\t Thong tin cac sinh vien co ky tu " << x << " trong ten la." << endl;
							outputDoubleList(b);
						}
					}
					if (choose == 2)
					{
						int c = rand() % (122 - 97 + 1) + 97;
						char x = (int)c;
						searchStudentDoubleList(l, b, count, x);
						if (count == 0)
							cout << "+ Khong co sinh vien nao co ky tu " << x << " trong ten.\n";
						else
						{
							cout << "\n\t\t Thong tin cac sinh vien co ky tu " << x << " trong ten la." << endl;
							outputDoubleList(b);
						}
					}
					 ;
				}
				else
					cout << "=== CAM ON DA SU DUNG CHUONG TRINH ===\n";
			} while (choose4 > 0 && choose4 < 8);
		}
		else if (choose1 == 4)
		{
			Stack s;
			initializeStack(s);
			ifstream fileIn;
			n = 0;
			readFileStack(s, n, fileIn);
			 ;
			int choose;
			do
			{
				system("cls");
				menuStack();
				 ;
				do
				{
					cout << "- Nhap vao chuc nang ban muon su dung:";
					cin >> choose;
					if (choose < 1 || choose > 6)
						cout << "Nhap khong hop le! Moi nhap lai.\n";
				} while (choose < 1 || choose > 6);
				if (choose == 1)
				{
					bool m = isEmty(s);
					if (m == true)
						cout << "+ Stack rong.\n";
					else
						cout << "+ Stack da co du lieu.\n";
					 ;
				}
				else if (choose == 2)
				{
					cout << "\n\t\t\t Thong tin cac sinh vien " << endl;
					outputStack(s);
					 ;
				}
				else if (choose == 3)
				{
					Student x;
					cout << "- Nhap thong tin cua sinh vien can them:" << endl;
					inputOneStudent(x);
					node* p = initializeNode(x);
					addOneStudentStack(s, p);
					cout << "+ Them thanh cong.\n";
					 ;
				}
				else if (choose == 4)
				{
					cout << "- Thong tin sinh vien dau danh sach:" << endl;
					inputHeadStack(s);
					 ;
				}
				else if (choose == 5)
				{
					Student x;
					pop(s, x);
					cout << "- Thong tin sinh vien dau danh sach:" << endl;
					outputOneStudent(x);
					cout << "+ Xoa thanh cong sinh vien dau danh sach.\n";
					 ;
				}
				else
					cout << "=== CAM ON BAN DA SU DUNG CHUONG TRINH ===.\n";
			} while (choose > 0 && choose < 6);
		}
		else if (choose1 == 5)
		{
			Queue q;
			initializeQueue(q);
			ifstream fileIn;
			n = 0;
			readFileQueue(q, n, fileIn);
			// ;
			int choose;
			do
			{
				system("cls");
				menuQueue();
				// ;
				do
				{
					cout << "- Nhap vao chuc nang ban muon su dung:";
					cin >> choose;
					if (choose < 1 || choose > 5)
						cout << "Nhap khong hop le! Moi nhap lai.\n";
				} while (choose < 1 || choose > 5);
				if (choose == 1)
				{
					if (isEmpty(q))
						cout << "+ Queue rong.\n";
					else
						cout << "+ Queue co du lieu.\n";
					// ;
				}
				else if (choose == 2)
				{
					cout << "\n\t\t\t Thong tin cac sinh vien" << endl;
					outputQueue(q);
					// ;
				}
				else if (choose == 3)
				{
					Student s;
					cout << "- Nhap vao thong tin sinh vien muon them:";
					inputOneStudent(s);
					node* p = initializeNode(s);
					push(q, p);
					cout << "+ Them thanh cong.\n";
					// ;
				}
				else if (choose == 4)
				{
					cout << "\n\t\t Thong tin sinh vien dau danh sach.\n";
					Student s;
					pop(q, s);
					outputOneStudent(s);
					cout << "+ Xoa thanh cong sinh vien dau danh sach.\n";
					 ;
				}
				else
				{
					cout << "=== CAM ON BAN DA SU DUNG CHUONG TRINH ===\n";
				}
			} while (choose > 0 && choose < 5);
		}
		else if (choose1 == 6)
		{
			ifstream fileIn;
			nodeTree* tree;
			initializeTree(tree);
			n = 0;
			readFileTree(tree, n, fileIn);
			// ;
			int choose;
			do
			{
				system("cls");
				menuTree();
				// ;
				do
				{
					cout << "+ Lua chon cua ban la:";
					cin >> choose;
					if (choose < 1 || choose>8)
						cout << "+ Nhap khong hop le! Moi nhap lai.\n";
				} while (choose < 1 || choose>8);
				if (choose == 1)
				{
					cout << "\n\t\t\t Thong tin cac sinh vien \n";
					NLR(tree);
					// ;
				}
				else if (choose == 2)
				{
					cout << "\n\t\t\t Thong tin sinh vien duyet theo NLR\n";
					int j = 1;
					NLR(tree);
					// ;
				}
				else if (choose == 3)
				{
					cout << "\n\t\t\t Thong tin sinh vien duyet theo LNR\n";
					LNR(tree);
					// ;
				}
				else if (choose == 4)
				{
					cout << "\n\t\t\t Thong tin sinh vien duyet theo RNL\n";
					RNL(tree);
					// ;
				}
				else if (choose == 5)
				{
					Student s;
					cout << "- Nhap vao thong tin cua sinh vien ma ban muon them." << endl;
					inputOneStudent(s);
					nodeTree* p = initializeNodeTree(s);
					addOneStudentTree(tree, p);
					cout << "* Them thanh cong.\n";
					// ;
				}
				else if (choose == 6)
				{
					cout << "+ Nhap vao MSSV cua sinh vien ma ban muon tim:";
					char x[30];
					cin.ignore();
					cin.getline(x, 30);
					nodeTree* search = searchTree(tree, x);
					if (search == nullptr)
						cout << "* Khong tim thay sinh vien co MSSV la:" << x << endl;
					else
					{
						cout << "\n\t\t Thong tin sinh vien co MSSV " << x << endl;
						outputOneStudent(search->data);
					}
					// ;
				}
				else if (choose == 7)
				{
					char x[30];
					cin.ignore();
					cout << "+ Nhap vao MSSV cua sinh vien ma ban muon xoa:";
					cin.getline(x, 30);
					nodeTree* search = searchTree(tree, x);
					if (search == nullptr)
						cout << "+ Khong co sinh vien nao co MSSV:" << x << endl;
					else
					{
						deleteOneStudentTree(tree, x);
						cout << "* Xoa thanh cong.\n";
					}
					// ;
				}
				else
					cout << "=== CAM ON BAN DA SU DUNG ===\n";
			} while (choose > 0 && choose < 8);
		}
		else
			cout << "=== CAM ON BAN DA SU DUNG CHUONG TRINH CUA CHUNG TOI ===\n";
	} while (choose1 > 0 && choose1 < 7);
	return 0;
}