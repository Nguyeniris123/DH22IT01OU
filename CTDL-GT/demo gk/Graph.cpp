#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstdlib>
#include<ctime>
#define MAX 20
using namespace std;
void menuMain()
{
	cout << "=========== MENU ============\n"
		<< "1) Bieu dien do thi bang ma tran ke.\n"
		<< "2) Bieu dien do thi bang danh sach ke.\n"
		<< "3) Thoat chuong trinh.\n"
		<< "=== MOI BAN LUA CHON ===\n";
}
void menuChooseTakeData()
{
	cout << "=========== MENU =============.\n"
		<< "1) Nhap cac dinh cua do thi va cac canh cua do thi.\n"
		<< "2) Doc file co san da luu tru cac dinh va cac canh cua do thi.\n"
		<< "3) Random cac dinh va canh cua do thi.\n"
		<< "=== MOI BAN LUA CHON ===.\n";
}
void menu()
{
	cout << "=========== MENU ============\n"
		<< "1) Lay du lieu.\n"
		<< "2) Xuat du lieu ra man hinh.\n"
		<< "3) Duyet theo chieu rong (BFS).\n"
		<< "4) Duyet theo chieu sau (DFS).\n"
		<< "5) Tim kiem dinh X co ton tai trong do thi hay khong bang thuat toan (BFS).\n"
		<< "6) Tim kiem dinh X co ton tai trong do thi hay khong bang thuat toan (DFS).\n"
		<< "7) Thoat.\n";
}
// ============ Cac ham xu ly ma tran ke =================
// Kiem tra x co thuoc mang dinh hay khong
bool check(char dinh[MAX], char x, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (x == dinh[i])
			return true;
	}
	return false;
}
// Hàm để lấy chỉ số trong ma trận
int checkNumber(char dinh[MAX], char x, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (x == dinh[i])
			return i;
	}
	return -1;
}
// Hàm kiểm tra xem cặp cạnh được random có tồn tại hay chưa. 
bool checkSame(char egde[1000], int m, char x, char y)
{
	for (int i = 0; i < m; i = i + 2)
	{
		int j = i + 1;
		if ((x == egde[i] && y == egde[j]) || (x == egde[j] && y == egde[i]))
			return false;
	}
	return true;
}
// Ham nhập một đồ thị
void inputArrays(char dinh[MAX], int matrix[MAX][MAX], int& n, int& m)
{
	do
	{
		cout << "- Nhap vao so dinh cua do thi:";
		cin >> n;
		if (n<1 || n>MAX)
			cout << "Nhap khong hop le! Moi nhap lai." << endl;
	} while (n<1 || n>MAX);
	cout << "+ Nhap vao lan luot cac dinh cua do thi:" << endl;
	for (int i = 0; i < n; i++)
	{
		do
		{
			cout << "* Dinh thu " << i + 1 << " :";
			cin >> dinh[i];
			if (dinh[i] < 65 || dinh[i]>90)
				cout << "Nhap khong hop le! Moi nhap lai." << endl;
		} while (dinh[i] < 65 || dinh[i]>90);
	}
	do
	{
		cout << "- Nhap vao so canh cua do thi:";
		cin >> m;
		if (m<1 || m > n * (n - 1) / 2)// Số dỉnh tối đa của đồ thị vô hướng la: đỉnh*(đỉnh-1)/2
			cout << "Nhap khong hop le! Moi nhap lai." << endl;
	} while (m<1 || m > n * (n - 1) / 2);
	for (int i = 0; i < m; i++)
	{
		char x, y;
		do
		{
			cout << "+ Nhap vao hai dinh cua canh thu " << i + 1 << ":";
			cin >> x >> y;
			if (check(dinh, x, n) == false || check(dinh, y, n) == false)
				cout << "+ Khong hop le! Moi nhap lai." << endl;
		} while (check(dinh, x, n) == false || check(dinh, y, n) == false);
		int b = checkNumber(dinh, x, n);
		int c = checkNumber(dinh, y, n);
		matrix[b][c] = matrix[c][b] = 1;
	}
}
// Hàm đọc file để tạo thành ma trận kề
void readFileArrays(char dinh[MAX], int matrix[MAX][MAX], int& n, ifstream& fileIn)
{
	fileIn.open("INPUT.txt", ios_base::in);
	if (fileIn.is_open())
	{
		fileIn >> n;
		fileIn.ignore();
		for (int i = 0; i < n; i++)
			fileIn >> dinh[i];
		while (!fileIn.eof())
		{
			char x, y;
			fileIn >> x;
			fileIn >> y;
			cout << x << y << endl;
			int a = checkNumber(dinh, x, n);
			int b = checkNumber(dinh, y, n);
			matrix[a][b] = matrix[b][a] = 1;
			fileIn.ignore();
		}
		fileIn.close();
	}
}
//Hàm random ngẫu nhiên một ma trận kề
void randomArrays(char dinh[MAX], int matrix[MAX][MAX], int& n)
{
	srand(time(0));
	n = rand() % (10 - 5 + 1) + 5;//random đỉnh
	int maxEdge = n * (n - 1) / 2;//Số cạnh tối đa
	int m = rand() % (maxEdge - 5 + 1) + 5;//Random cạnh
	for (int i = 0; i < n; i++)//Random ra cac dinh
	{
		char a;
		//Khi chưa có đỉnh nào
		if(i==0)
			dinh[i] = rand() % (90 - 65 + 1) + 65;
		//Khi xuất hiện đỉnh duyệt xem có giống hay không.
		else
		{
			do
			{
				a = rand() % (90 - 65 + 1) + 65;
			} while (check(dinh, a, n) == true);//Nếu đỉnh random ra giống thì cho random lại
			dinh[i] = a;
		}
	}
	char edge[1000];
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		char x, y;
		do
		{
			do
			{
				x = rand() % (90 - 65 + 1) + 65;
			} while (!check(dinh, x, n));//Nếu random ra đỉnh không có trong mảng đỉnh thì cho random lại
			do
			{
				y = rand() % (90 - 65 + 1) + 65;
			} while (!check(dinh, y, n) || x == y);
		} while (!checkSame(edge, m, x, y));//Nếu hai đỉnh giống nhau thì cho random lại
		edge[dem++] = x;
		edge[dem++] = y;
		int a = checkNumber(dinh, x, n);
		int b = checkNumber(dinh, y, n);
		matrix[a][b] = matrix[b][a] = 1;
	}
}
// Hàm xuất ma trận kề
void outputMatrix(int a[MAX][MAX], int n, char dinh[MAX])
{
	cout << "\t\t";
	for (int i = 0; i < n; i++)
	{
		cout << dinh[i] << "  ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\t" << dinh[i] << "\t";
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] != 1)
				a[i][j] = 0;
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}
//Ham de lay ki tu
char checkChar(char dinh[MAX], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (x == i)
			return dinh[i];
	}
}
// Tạo ra các node, queue và stack.
struct node
{
	char data;
	node* pNext;
};
struct queue
{
	node* pHead;
	node* pTail;
};
struct stack
{
	node* pTop;
};
void initializeQueue(queue& q)
{
	q.pHead = nullptr;
	q.pTail = nullptr;
}
void initializeStack(stack& s)
{
	s.pTop = nullptr;
}
node* initializeNode(char x)
{
	node* p = new node;
	p->data = x;
	p->pNext = nullptr;
	return p;
}
// Xử lý queue
void push(queue& q, node* p)
{
	if (q.pHead == nullptr)
		q.pHead = q.pTail = p;
	else
	{
		q.pTail->pNext = p;
		q.pTail = p;
	}
}
void pop(queue& q, char& x)
{
	if (q.pHead == nullptr)
		return;
	else
	{
		node* j = q.pHead;
		x = q.pHead->data;
		q.pHead = q.pHead->pNext;
		delete j;
	}
}
bool isEmpty(queue& q)
{
	if (q.pHead == nullptr)
		return true;
	return false;
}
// Xử lý stack
bool isEmptyStack(stack s)
{
	if (s.pTop == nullptr)
		return true;
	return false;
}
void pushStack(stack& s, node* p)
{
	if (s.pTop == nullptr)
		s.pTop = p;
	else
	{
		for (node* i = s.pTop; i != nullptr; i = i->pNext)
		{
			if (i->pNext == nullptr)
			{
				i->pNext = p;
				p->pNext = nullptr;
				break;
			}
		}
	}
}
void popStack(stack& s, char& x)
{
	if (s.pTop == nullptr)
		return;
	else
	{
		node* j = s.pTop;
		x = s.pTop->data;
		s.pTop = s.pTop->pNext;
		delete j;
	}
}
// Thuật toán BFS của ma trận kề: Đầu vào first là một kí tự là một trong các đỉnh của đồ thị
void BFS(int matrix[MAX][MAX],char dinh[MAX], int bfs[MAX], bool c[MAX], queue q, int n, int& k, char first)
{
	node* p = initializeNode(first);
	push(q, p);
	c[checkNumber(dinh,first,n)] = true;//Đưa đỉnh đầu tiên được duyệt bằng true: Mảng c lúc đầu là false vì chưa có đỉnh nào được duyệt qua
	while (!isEmpty(q))
	{
		char x;
		pop(q, x);
		int m = checkNumber(dinh, x, n);
		bfs[k] = m;
		k++;
		for (int i = 0; i < n; i++)
		{
			if (matrix[m][i] == 1 && c[i] != true)
			{
				char y = checkChar(dinh, n, i);//Chuyển về kiểu chuỗi để có thể đẩy vào queue
				node* h = initializeNode(y);
				push(q, h);
				c[i] = true;
			}
		}
	}
}
// Hàm xuất các đinh duyệt
void outputBrowse(char dinh[MAX], int bfs[MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << dinh[bfs[i]] << "  ";
	}
}
// Thuật toán DFS của ma trận kề: Đầu vào first là một kí tự là một trong các đỉnh của đồ thị
void DFS(int matrix[MAX][MAX],char dinh[MAX], int dfs[MAX], bool c[MAX], stack s, char first, int n, int& k)
{
	node* p = initializeNode(first);
	pushStack(s, p);
	int m = checkNumber(dinh, first, n);
	dfs[k] = m;
	k++;
	c[checkNumber(dinh,first,n)] = true;//True la đỉnh  da duoc duyet
	int visited = -1, u = first;
	while (k < n)//Khi số lượng phần tử của mảng dfs < n: thì chưa duyệt hết các đỉnh
	{
		if (n == visited)
		{
			char a;
			popStack(s, a);
			u = checkNumber(dinh, a, n);//Lấy u để có thể duyệt chỉ số trong ma trận
		}
		for (visited = 0; visited < n; visited++)
		{
			if (matrix[u][visited] == 1 && c[visited] != true)
			{
				char x = checkChar(dinh, n, u);//Chuyển qua ký tự để có thể PUSH VAO stack
				char v = checkChar(dinh, n, visited);
				node* q = initializeNode(x);
				pushStack(s, q);
				node* t = initializeNode(v);
				pushStack(s, t);
				dfs[k] = visited;
				k++;
				c[visited] = true;
				u = visited;
				break;
			}
		}
	}
}
// Tìm kiếm theo BFS
int searchBFS(int matrix[MAX][MAX],char dinh[MAX], bool c[MAX], queue q, int n, char x)
{
	node* p = initializeNode(dinh[0]);//Bắt đầu đi từ đỉnh đầu tiên
	push(q, p);
	c[0] = true;
	if (dinh[0] == x)//Đỉnh đầu tiên
		return 1;
	while (!isEmpty(q))
	{
		char a;
		pop(q, a);
		if (a == x)
			return 1;
		for (int i = 0; i < n; i++)
		{
			if (matrix[checkNumber(dinh,a,n)][i] == 1 && c[i] != true)
			{
				node* t = initializeNode(checkChar(dinh,n,i));
				push(q, t);
				c[i] = true;
			}
		}
	}
	return -1;
}
// Tìm kiếm theo DFS
int searchDFS(int matrix[MAX][MAX],char dinh[MAX], bool c[MAX], stack s, int n, char x)
{
	node* p = initializeNode(0);//Bắt đầu duyệt từ đỉnh đầu tiên
	pushStack(s, p);
	c[0] = true;
	int visited = -1, u = 0;
	while (!isEmptyStack(s))
	{
		if (visited == n)
		{
			char a;
			popStack(s, a);//Sau khi pop ở stack ra một kí tự so sánh với x cần tìm
			if (a == x)
				return 1;
			u = checkNumber(dinh, a, n);
		}
		for (visited = 0; visited < n; visited++)
		{
			if (matrix[u][visited] == 1 && c[visited] == false)
			{
				char y = checkChar(dinh, n, u);//Chuyển qua kí tự mới có thể push vào stack vì data cua stack là kiểu char
				char v = checkChar(dinh, n, visited);
				node* q = initializeNode(y);
				pushStack(s, q);
				node* t = initializeNode(v);
				pushStack(s, t);
				c[visited] = true;
				u = visited;
				break;
			}
		}
	}
	return -1;
}

// ============= CÁC HÀM XỬ LÝ DANH SÁCH KỀ ==============
struct list
{
	node* pHead;
};
void initalizeList(list& l)
{
	l.pHead = nullptr;
}
// Thêm vào cuối danh sách liên kết
void addTail(list& l, node* p)
{
	if (l.pHead == nullptr)
		l.pHead = p;
	else
	{
		for (node* i = l.pHead; i != nullptr; i = i->pNext)
		{
			if (i->pNext == nullptr)
			{
				i->pNext = p;
				p->pNext = nullptr;
				return;
			}
		}
	}
}
//Đọc file danh sách liên kết
void readFile(char dinh[MAX], list*& first, int& n, int& m, ifstream& fileIn)
{
	fileIn.open("INPUT.txt", ios_base::in);
	if (fileIn.is_open())
	{
		fileIn >> n;
		first = new list[n];//Khởi tạo một mảng các list
		fileIn.ignore();
		for (int i = 0; i < n; i++)
		{
			fileIn >> dinh[i];
			initalizeList(first[i]);
		}
		while (!fileIn.eof())
		{
			char x, y;
			fileIn >> x;
			fileIn >> y;
			int a = checkNumber(dinh, x, n);
			int b = checkNumber(dinh, y, n);
			if (first[a].pHead == nullptr)
			{
				node* p = initializeNode(x);
				addTail(first[a], p);
			}
			node* q = initializeNode(y);
			addTail(first[a], q);
			if (first[b].pHead == nullptr)
			{
				node* p = initializeNode(y);
				addTail(first[b], p);
			}
			node* g = initializeNode(x);
			addTail(first[b], g);
			fileIn.ignore();
		}
	}
}
void randomList(char dinh[MAX], list*& first, int& n, int& m)
{
	srand(time(0));
	n = rand() % (10 - 5 + 1) + 5;
	int maxEdge = n * (n - 1) / 2;
	m = rand() % (maxEdge - 5 + 1) + 5;
	for (int i = 0; i < n; i++)//Random ra cac dinh
	{
		char a;
		//Khi chưa có đỉnh nào
		if (i == 0)
			dinh[i] = rand() % (90 - 65 + 1) + 65;
		//Khi xuất hiện đỉnh duyệt xem có giống hay không.
		else
		{
			do
			{
				a = rand() % (90 - 65 + 1) + 65;
			} while (check(dinh, a, n) == true);//Nếu đỉnh random ra giống thì cho random lại
			dinh[i] = a;
		}
	}
	first = new list[n];//Khởi tạo mảng các list
	for (int i = 0; i < n; i++)
		initalizeList(first[i]);//Khởi tạo cho từng list trong mảng
	char edge[1000];
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		char x, y;
		do
		{
			do
			{
				x = rand() % (90 - 65 + 1) + 65;
			} while (!check(dinh, x, n));//Nếu random ra đỉnh không có trong mảng đỉnh thì cho random lại
			do
			{
				y = rand() % (90 - 65 + 1) + 65;
			} while (!check(dinh, y, n) || x==y );
		} while (!checkSame(edge, m*2, x, y));//Nếu một cặp đỉnh giống nhau thì cho random lại
		edge[dem++] = x;
		edge[dem++] = y;
		cout << x << "  " << y << endl;
		int a = checkNumber(dinh, x, n);
		int b = checkNumber(dinh, y, n);
		if (first[a].pHead == nullptr)
		{
			node* p = initializeNode(x);
			addTail(first[a], p);
		}
		node* q = initializeNode(y);
		addTail(first[a], q);
		if (first[b].pHead == nullptr)
		{
			node* p = initializeNode(y);
			addTail(first[b], p);
		}
		node* g = initializeNode(x);
		addTail(first[b], g);
	}
}
void inputList(char dinh[MAX], list*& l, int& n, int& m)
{
	do
	{
		cout << "- Nhap vao lan so luong dinh va canh cua do thi:";
		cin >> n >> m;
		int maxEdge = n * (n - 1) / 2;
		if (n<1 || n>MAX || m<0 || m>maxEdge)
			cout << "* Nhap khong hop le! Moi nhap lai." << endl;
	} while (n<1 || n>MAX || m<0 || m>(n * (n - 1) / 2));
	for (int i = 0; i < n; i++)
	{
		cout << "+ Nhap dinh thu " << i + 1 << ":";
		cin >> dinh[i];
	}
	l = new list[n];
	for (int i = 0; i < n; i++)
		initalizeList(l[i]);
	for (int i = 0; i < m; i++)
	{
		char x, y;
		do
		{
			cout << "* Nhap vao hai dinh noi canh thu " << i + 1 << ":";
			cin >> x >> y;
			if (!check(dinh, x, n) || !check(dinh, y, n))
				cout << "* Nhap sai moi nhap lai." << endl;
		} while (!check(dinh, x, n) || !check(dinh, y, n));
		int a = checkNumber(dinh, x, n);
		int b = checkNumber(dinh, y, n);
		if (l[a].pHead == nullptr)
		{
			node* p = initializeNode(x);
			addTail(l[a], p);
		}
		node* q = initializeNode(y);
		addTail(l[a], q);
		if (l[b].pHead == nullptr)
		{
			node* p = initializeNode(y);
			addTail(l[b], p);
		}
		node* g = initializeNode(x);
		addTail(l[b], g);
	}
}
void outputList(list l)
{
	for (node* i = l.pHead; i != nullptr; i = i->pNext)
		cout << i->data << "  ";
}
//Xuất mảng các danh sách
void outputArrayList(list* first, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "+ List thu " << i + 1 << ":";
		outputList(first[i]);
		cout << endl;
	}
}
// Duyệt BFS bằng danh sách kề
void BFSList(list* first, bool c[MAX], char dinh[MAX], char bfs[MAX], queue q, int n, char x, int& k)
{
	node* p = initializeNode(x);
	push(q, p);
	c[checkNumber(dinh, x, n)] = true;
	while (!isEmpty(q))
	{
		char a;
		pop(q, a);
		bfs[k] = a;
		k++;
		int d = checkNumber(dinh, a, n);
		for (node* i = first[d].pHead; i != nullptr; i = i->pNext)//Duyệt từ đầu tới cuối của một phần tử list trong mảng
		{
			if (c[checkNumber(dinh, i->data, n)] != true)// Đỉnh đó Chưa được duyệt
			{
				node* g = initializeNode(i->data);
				push(q, g);//Push dữ liệu của đỉnh đó vào stack
				c[checkNumber(dinh, i->data, n)] = true;
			}
		}
	}
}
//Xuất mảng
void outputArray(char a[MAX], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
}
// Duyệt DFS bằng danh sách kề
void DFSList(list* first, char dfs[MAX], bool c[MAX], char dinh[MAX], stack& s, int& k, char x, int n)
{
	node* p = initializeNode(x);
	pushStack(s, p);
	dfs[k] = x;
	k++;
	c[checkNumber(dinh, x, n)] = true;
	node* visited = first[checkNumber(dinh, x, n)].pHead, * u = p;
	while (k < n)
	{
		if (visited == nullptr)//Khi mà nó chạy tới cuối danh sách mà chưa tìm thấy đỉnh thì sẽ trỏ tới null
			popStack(s, x);
		for (visited = first[checkNumber(dinh, x, n)].pHead; visited != 0; visited = visited->pNext)
		{
			if (c[checkNumber(dinh, visited->data, n)] != true)
			{
				node* g = initializeNode(visited->data);
				pushStack(s, g);
				node* j = initializeNode(x);
				pushStack(s, j);
				dfs[k] = visited->data;//Lấy dữ liệu của visited đưa vào mảng dfs
				x = visited->data;//Để bắt đầu duyệt phần tử list mới của mảng
				k++;
				c[checkNumber(dinh, visited->data, n)] = true;
				u = visited;
				break;
			}
		}
	}
}
//Tìm kiếm trong danh sách kề bằng BFS
int searchBFSList(list* first, bool c[MAX], char dinh[MAX], queue& q, int n, char one, char x)
{
	node* p = initializeNode(one);
	push(q, p);
	c[checkNumber(dinh, one, n)] = true;
	while (!isEmpty(q))
	{
		char y;
		pop(q, y);
		if (y == x)
			return 1;
		for (node* i = first[checkNumber(dinh, y, n)].pHead; i != nullptr; i = i->pNext)
		{
			if (c[checkNumber(dinh, i->data, n)] != true)
			{
				node* g = initializeNode(i->data);
				push(q, g);
				c[checkNumber(dinh, i->data, n)] = true;
			}
		}
	}
	return -1;
}
//Tìm kiếm trong danh sách kề bằng DFS
int searchDFSList(list* first, bool c[MAX], char dinh[MAX], stack s, int n, char x)
{
	node* p = initializeNode(dinh[0]);
	pushStack(s, p);
	c[checkNumber(dinh, dinh[0], n)] = true;
	node* visited = p, * u = p;
	while (!isEmptyStack(s))
	{
		if (visited == nullptr)
			popStack(s, u->data);
		if (u->data == x)
			return 1;
		for (visited = first[checkNumber(dinh, u->data, n)].pHead; visited != NULL; visited = visited->pNext)
		{
			if (c[checkNumber(dinh, visited->data, n)] != true)
			{
				node* g = initializeNode(visited->data);
				pushStack(s, g);
				node* j = initializeNode(u->data);
				pushStack(s, j);
				c[checkNumber(dinh, visited->data, n)] = true;
				u = visited;
				break;
			}
		}
	}
	return -1;
}
//Hàm xóa một danh sách
void deleteList(list& l)
{
	for (node* i = l.pHead; i != nullptr; i = l.pHead)//Cho i quay lại pHead để xóa tiếp: Ta xóa từ đầu đến cuối
	{
		node* j = l.pHead;
		l.pHead = l.pHead->pNext;//Cập nhật lại pHead là node tiếp theo
		delete j;
	}
}
//Hàm xóa một mảng các danh sách
void deleteListFirst(list*& first, int n)
{
	for (int i = 0; i < n; i++)
	{
		deleteList(first[i]);
	}
	delete[]first;
	first = nullptr;
}
int main()
{
	int choose;
	do
	{
		system("cls");
		menuMain();
		_getch();
		do
		{
			cout << "- Nhap vao lua chon cua ban:";
			cin >> choose;
			if (choose < 1 || choose>3)
				cout << "+ Nhap khong hop le! Moi nhap lai.\n";
		} while (choose < 1 || choose>3);
		// Chọn ma trận kề
		if (choose == 1)
		{
			int chooseData;
			int matrix[MAX][MAX], n, edge;
			char dinh[MAX];
			bool m = false;
			do
			{
				system("cls");
				menu();
				_getch();
				do
				{
					cout << "- Nhap vao lua chon cua ban:";
					cin >> chooseData;
					if (chooseData < 1 || chooseData>7)
						cout << "+ Nhap khong hop le! Moi nhap lai.\n";
				} while (chooseData < 1 || chooseData>7);
				if (chooseData == 1)
				{
					int chooseTakeData;
					system("cls");
					menuChooseTakeData();
					_getch();
					do
					{
						cout << "- Nhap vao lua chon cua ban:";
						cin >> chooseTakeData;
						if (chooseTakeData < 1 || chooseTakeData>7)
							cout << "+ Nhap khong hop le! Moi nhap lai.\n";
					} while (chooseTakeData < 1 || chooseTakeData>7);
					if (chooseTakeData == 1)
					{
						inputArrays(dinh, matrix, n, edge);
					}
					if (chooseTakeData == 2)
					{
						ifstream fileIn;
						readFileArrays(dinh, matrix, n, fileIn);
						cout << "+ Doc file thanh cong.\n";
					}
					if (chooseTakeData == 3)
					{
						randomArrays(dinh, matrix, n);
						cout << "+ Tao ngau nhien thanh cong.\n";
					}
					m = true;
					_getch();
				}
				else if (chooseData == 2)
				{
					if (m == false)
						cout << "+ Chua co du lieu." << endl;
					else
					{
						cout << "+ Ta co ma tran ke cua do thi sau:" << endl;
						outputMatrix(matrix, n, dinh);
					}
					_getch();
				}
				else if (chooseData == 3)
				{
					if (m == false)
						cout << "+ Chua co du lieu.\n";
					else
					{
						queue q;
						initializeQueue(q);
						bool c[MAX];
						for (int i = 0; i < n; i++)
							c[i] = false;
						int bfs[MAX], k = 0;
						char x;
						cout << "+ Nhap vao dinh ma ban muon bat dau duyet:";
						cin >> x;
						if (!check(dinh, x, n))
							cout << "+ Khong tim thay dinh " << x << " trong do thi." << endl;
						else
						{
							
							BFS(matrix,dinh, bfs, c, q, n, k, x);
							cout << "+ Danh sach duyet do thi bat dau tu dinh " << x << " la:";
							outputBrowse(dinh, bfs, n);
						}
					}
					_getch();
				}
				else if (chooseData == 4)
				{
					if (m == false)
						cout << "+ Chua co du lieu.\n";
					else
					{
						stack s;
						initializeStack(s);
						bool c[MAX];//Mảng lưu trữ đỉnh đã duyệt hay chưa
						for (int i = 0; i < n; i++)
							c[i] = false;
						int dfs[MAX], k = 0;
						char x;
						cout << "+ Nhap vao dinh ma ban muon bat dau duyet:";
						cin >> x;
						if (!check(dinh, x, n))
							cout << "+ Khong tim thay dinh " << x << " trong do thi." << endl;
						else
						{
							DFS(matrix,dinh, dfs, c, s, x, n, k);
							cout << "+ Danh sach duyet do thi bat dau tu dinh " << x << " la:";
							outputBrowse(dinh, dfs, n);
						}
					}
					_getch();
				}
				else if (chooseData == 5)
				{
					if (m == false)
						cout << "+ Chua co du lieu.\n";
					else
					{
						queue q;
						initializeQueue(q);
						bool c[MAX];
						for (int i = 0; i < n; i++)
							c[i] = false;
						char x;
						cout << "+ Nhap vao dinh ma ban muon tim kiem trong do thi:";
						cin >> x;
						int search = searchBFS(matrix,dinh, c, q, n, x);
						if (search == 1)
							cout << "+ Co dinh " << x << " xuat hien trong do thi." << endl;
						else
							cout << "+ Dinh " << x << " khong xuat hien trong do thi." << endl;
					}
					_getch();
				}
				else if (chooseData == 6)
				{
					if (m == false)
						cout << "+ Chua co du lieu.\n";
					else
					{
						stack s;
						initializeStack(s);
						bool c[MAX];
						for (int i = 0; i < n; i++)
							c[i] = false;
						char x;
						cout << "+ Nhap vao dinh ma ban muon tim kiem trong do thi:";
						cin >> x;
						int search = searchDFS(matrix,dinh, c, s, n, x);
						if (search == 1)
							cout << "+ Co dinh " << x << " xuat hien trong do thi." << endl;
						else
							cout << "+ Dinh " << x << " khong xuat hien trong do thi." << endl;
					}
					_getch();
				}
				else 
					cout << "=== CAM ON BAN DA SU DUNG ===\n";
			} while (chooseData > 0 && chooseData < 7);
		}
		else if (choose == 2)
		{
			int chooseData;
			list* first = nullptr;
			char dinh[MAX];
			bool m = false;
			int n, edge;
			do
			{
				system("cls");
				menu();
				_getch();
				do
				{
					cout << "- Nhap vao lua chon cua ban:";
					cin >> chooseData;
					if (chooseData < 1 || chooseData>7)
						cout << "+ Nhap khong hop le! Moi nhap lai.\n";
				} while (chooseData < 1 || chooseData>7);
				if (chooseData == 1)
				{
					int chooseTakeData;
					system("cls");
					menuChooseTakeData();
					_getch();
					do
					{
						cout << "- Nhap vao lua chon cua ban:";
						cin >> chooseTakeData;
						if (chooseTakeData < 1 || chooseTakeData>7)
							cout << "+ Nhap khong hop le! Moi nhap lai.\n";
					} while (chooseTakeData < 1 || chooseTakeData>7);
					if (chooseTakeData == 1)
					{
						inputList(dinh, first, n, edge);
					}
					else if (chooseTakeData == 2)
					{
						ifstream fileIn;
						readFile(dinh, first, n, edge, fileIn);
						cout << "+ Doc file thanh cong.\n";
					}
					else
					{
						randomList(dinh, first, n, edge);
						cout << "+ Khoi tao thanh cong.\n";
					}
					m = true;
					_getch();
				}
				else if (chooseData == 2)
				{
					if (m == false)
						cout << "+ Chua co du lieu.\n";
					else
					{
						cout << "- Ta co danh sach ke sau:" << endl;
						outputArrayList(first, n);
					}
					_getch();
				}
				else if (chooseData == 3)
				{
					if (m == false)
						cout << "+ Chua co du lieu.\n";
					else
					{
						queue q;
						initializeQueue(q);
						bool c[MAX];
						for (int i = 0; i < n; i++)
							c[i] = false;
						char bfs[MAX];
						char x;
						cout << "+ Ban muon bat dau duyet tu dinh thu bao nhieu:";
						cin >> x;
						if (!check(dinh, x, n))
							cout << "+ Khong co dinh " << x << " trong do thi.\n";
						else
						{
							int k = 0;
							BFSList(first, c, dinh, bfs, q, n, x, k);
							cout << "+ Thu tu duyet BFS bat dau tu dinh " << x << " la:";
							outputArray(bfs, n);
							cout << endl;
						}
					}
					_getch();
				}
				else if (chooseData == 4)
				{
					if (m == false)
						cout << "+ Chua co du lieu.\n";
					else
					{
						stack s;
						initializeStack(s);
						bool c[MAX];
						for (int i = 0; i < n; i++)
							c[i] = false;
						char dfs[MAX];
						char x;
						cout << "+ Ban muon bat dau duyet tu dinh thu bao nhieu:";
						cin >> x;
						if (!check(dinh, x, n))
							cout << "+ Khong co dinh " << x << " trong do thi.\n";
						else
						{
							int k = 0;
							DFSList(first, dfs, c, dinh, s, k, x, n);
							cout << "+ Thu tu duyet DFS bat dau tu dinh " << x << " la:";
							outputArray(dfs, n);
							cout << endl;
						}
					}
					_getch();
				}
				else if (chooseData == 5)
				{
					if (m == false)
						cout << "+ Chua co du lieu.\n";
					else
					{
						queue q;
						initializeQueue(q);
						bool c[MAX];
						for (int i = 0; i < n; i++)
							c[i] = false;
						char bfs[MAX];
						char x;
						cout << "+ Nhap vao dinh ban muon tim kiem:";
						cin >> x;
						int search = searchBFSList(first, c, dinh, q, n, dinh[0], x);
						if (search == 1)
							cout << "- Dinh " << x << " co ton tai tren do thi.\n";
						else
							cout << "- Dinh " << x << " khong ton tai tren do thi.\n";
					}
					_getch();
				}
				else if (chooseData == 6)
				{
					if (m == false)
						cout << "+ Chua co data.\n";
					else
					{
						stack s;
						initializeStack(s);
						char x;
						bool c[MAX];
						for (int i = 0; i < n; i++)
							c[i] = false;
						cout << "+ Nhap vao dinh ma ban muon tim:";
						cin >> x;
						int search = searchDFSList(first, c, dinh, s, n, x);
						if (search == 1)
							cout << "+ Dinh " << x << " co ton tai trong do thi.\n";
						else
							cout << "+ Dinh " << x << " khong ton tai trong do thi.\n";
					}
					_getch();
				}
				else
				{
					if (m == true)
					{
						deleteListFirst(first, n);
						cout << "+ Xoa thanh cong.\n";
					}
					cout << "========= CAM ON BAN DA SU CHUONG TRINH CUA CHUNG TOI ========." << endl;
				}
			} while (chooseData > 0 && chooseData < 7);
		}
	} while (choose > 0 && choose < 3);
	return 0;
}