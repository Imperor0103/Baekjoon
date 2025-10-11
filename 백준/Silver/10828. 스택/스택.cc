#include <iostream>
#include <string>

using namespace std;

const int MAX = 10000;

void Push(int* stackArr, int* top, int x)
{
	stackArr[++(*top)] = x;
}

void Pop(int* stackArr, int* top)
{
	if (*top == -1)
		cout << -1 << '\n';
	else
		cout << stackArr[(*top)--] << '\n';
}

void Size(int* top)
{
	cout << *top + 1 << '\n';
}

void Empty(int* top)
{
	cout << (*top == -1 ? 1 : 0) << '\n';
}

void Top(int* stackArr, int* top)
{
	if (*top == -1)
		cout << -1 << '\n';
	else
		cout << stackArr[*top] << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int stackArr[MAX];
	int top = -1;

	for (int i = 0; i < N; i++)
	{
		string cmd;
		cin >> cmd;

		if (cmd == "push")
		{
			int x;
			cin >> x;
			Push(stackArr, &top, x);
		}
		else if (cmd == "pop")
		{
			Pop(stackArr, &top);
		}
		else if (cmd == "size")
		{
			Size(&top);
		}
		else if (cmd == "empty")
		{
			Empty(&top);
		}
		else if (cmd == "top")
		{
			Top(stackArr, &top);
		}
	}
	return 0;
}