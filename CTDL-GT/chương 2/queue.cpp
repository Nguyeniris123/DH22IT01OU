#include <iostream>
using namespace std;
#define MAX 100
int main()
{
	int a[MAX];
	int rear, front;
	
	return 0;
}

int push(int a[], int &front, int &rear, int x)
{
	if ((rear - front == MAX - 1) || (rear - front == -1))
		return 0;
	else
	{
		if (front == -1)
			front = 0;
		if (rear == MAX - 1)
			rear = -1;
		a[++rear] = x;
		return 1;
	}
}

int pop(int a[], int &rear, int &front, int &x)
{
	if (front != -1)
	{
		x = a[front];
		if (front == rear)
		{
			front = -1;
			rear = -1;
		}
		else
		{
			front++;
			if (front > MAX - 1)
				front = 0;
		}
		return 1;
	}
	return 0;
}
