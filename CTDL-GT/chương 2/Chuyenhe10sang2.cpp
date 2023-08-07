#include <iostream>
using namespace std;
#define MAX 100
struct Stack
{
	int a[MAX];
	int top;
};
void init(Stack &s);
void push(Stack &s, int x);
int pop(Stack &s);
void nhapdanhsach(int a[], int n, Stack &s);
void output(Stack s);
bool isEmpty(Stack s);
bool isFull(Stack s);
void convertDecimalToBinary(int n, Stack s);

int main()
{
	Stack s;
	init(s);
	int n;
	cout << "Nhap n: ";
	cin >> n;
	convertDecimalToBinary(n, s);
	return 0;
}

void init(Stack &s)
{
	s.top = -1;
}

void push(Stack &s, int x)
{
	s.a[++s.top] = x;
}

int pop(Stack &s)
{
	return s.a[s.top--];
}

void nhapdanhsach(int a[], int n, Stack &s)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		push(s, a[i]);
	}
}

void output(Stack s)
{
	for (int i = 0; i <= s.top; i++)
		cout << s.a[i] << " ";
	cout << endl;
}

bool isEmpty(Stack s)
{
	return s.top < 0;
	/*if (s.top < 0)
	return true;
	return false;*/
}

bool isFull(Stack s)
{
	return s.top == MAX - 1;
}

void convertDecimalToBinary(int n, Stack s)
{
	while (n != 0) //push cac so du chia cho 2 vao stack
	{
		int d = n % 2;
		push(s, d);
		n /= 2;
	}
	//pop tat ca cac pt trong stack
	while (isEmpty(s) == false)
		cout << pop(s);
	cout << endl;
}