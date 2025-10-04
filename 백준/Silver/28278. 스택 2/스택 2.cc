#include <iostream>
#include <stack>

using namespace std;

void Custom_Push(stack<int>* s)
{
	int x;
	cin >> x;
	s->push(x);
}

void Custom_Pop(stack<int>* s)
{
	if (s->empty())
		cout << -1 << '\n';
	else
	{
		cout << s->top() << '\n';
		s->pop();
	}
}

void Custom_Print_Size(stack<int>* s)
{
	cout << s->size() << '\n';
}

void Custom_Print_Empty(stack<int>* s)
{
	if (s->empty())
		cout << 1 << '\n';
	else
		cout << 0 << '\n';
}

void Custom_Print_Top(stack<int>* s)
{
	if (s->empty())
		cout << -1 << '\n';
	else
	{
		cout << s->top() << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;	// command의 수
	cin >> N;

	stack<int> s;
	for (int i = 0; i < N; i++)
	{
		int command;
		cin >> command;

		if (command == 1)
			Custom_Push(&s);
		else if (command == 2)
			Custom_Pop(&s);
		else if (command == 3)
			Custom_Print_Size(&s);
		else if (command == 4)
			Custom_Print_Empty(&s);
		else if (command == 5)
			Custom_Print_Top(&s);
	}
	return 0;
}