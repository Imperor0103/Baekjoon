#include <iostream>

using namespace std;

void CustomSwap(int* a, int* b);

void CustomPush(int* heap, int* size, int x)
{
	int cur = (*size)++;
	heap[cur] = x;

	while (cur > 0)
	{
		int parent = (cur - 1) / 2;

		if (abs(heap[parent]) < abs(heap[cur]) ||
			(abs(heap[parent]) == abs(heap[cur]) && heap[parent] <= heap[cur]))
			break;

		CustomSwap(&heap[parent], &heap[cur]);
		cur = parent;
	}
}

int CustomPop(int* heap, int* size)
{
	if (*size == 0)
		return 0;
	int ret = heap[0];
	(*size)--;
	heap[0] = heap[*size];

	int cur = 0;
	while (true)
	{
		int left = cur * 2 + 1;
		int right = cur * 2 + 2;
		int smallest = cur;

		if (left < *size)
		{
			if (abs(heap[left]) < abs(heap[smallest]) ||
				(abs(heap[left]) == abs(heap[smallest]) && heap[left] < heap[smallest]))
				smallest = left;
		}
		if (right < *size)
		{
			if (abs(heap[right]) < abs(heap[smallest]) ||
				(abs(heap[right]) == abs(heap[smallest]) && heap[right] < heap[smallest]))
				smallest = right;
		}
		if (smallest == cur)
			break;

		CustomSwap(&heap[cur], &heap[smallest]);
		cur = smallest;
	}
	return ret;
}

void CustomSwap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int heap[100001];
	int size = 0;

	for (int i = 0; i < N; ++i)
	{
		int x;
		cin >> x;

		if (x == 0)
			cout << CustomPop(heap, &size) << '\n';
		else
			CustomPush(heap, &size, x);
	}

	return 0;
}