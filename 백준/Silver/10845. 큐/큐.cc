#include <iostream>

using namespace std;

#define MAX 10000

void Push(int* queue, int* back, int x) 
{
	// 먼저 데이터 추가 후에 back의 인덱스를 1 증가해서 빈 공간을 가리켜야한다	
	// 그래야 새로운 데이터를 추가할 수 있다
	queue[(*back)++] = x;
}

void Pop(int* queue, int* front, int* back) 
{
	// front는 자료가 있는 공간을 가리킨다
	// 그래야 밖으로 빼낼 수 있다
	if (*front == *back)
		cout << -1 << '\n';
	else
		cout << queue[(*front)++] << '\n';
}

void Size(int* front, int* back) 
{
	cout << *back - *front << '\n';
}

void Empty(int* front, int* back) 
{
	cout << ((*front == *back) ? 1 : 0) << '\n';
}

void Front(int* queue, int* front, int* back) 
{
	if (*front == *back)
		cout << -1 << '\n';
	else
		cout << queue[*front] << '\n';
}

void Back(int* queue, int* front, int* back) 
{
	if (*front == *back)
		cout << -1 << '\n';
	else
		cout << queue[*back - 1] << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int queue[MAX];
	int front = 0, back = 0;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) 
	{
		string cmd;
		cin >> cmd;

		if (cmd == "push") 
		{
			int x;
			cin >> x;
			Push(queue, &back, x);
		}
		else if (cmd == "pop") 
		{
			Pop(queue, &front, &back);
		}
		else if (cmd == "size") 
		{
			Size(&front, &back);
		}
		else if (cmd == "empty") 
		{
			Empty(&front, &back);
		}
		else if (cmd == "front") 
		{
			Front(queue, &front, &back);
		}
		else if (cmd == "back") 
		{
			Back(queue, &front, &back);
		}
	}
	return 0;
}