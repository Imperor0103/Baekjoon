#include <iostream>

using namespace std;

void CustomSwap(int* a, int* b);

void CustomPush(int* heap, int* heapSize, int x)
{
	heap[(*heapSize)++] = x;	// heap[0]부터 사용
	int child = *heapSize - 1;
	int parent = (child - 1) / 2;

	// 0번 루트까지 올라가면서 부모보다 큰 경우 swap
	// child > 0이면 부모가 존재하므로 계속 swap 가능
	while (child > 0 && heap[parent] < heap[child])
	{
		CustomSwap(&heap[parent], &heap[child]);
		child = parent;
		parent = (child - 1) / 2;
	}
}

int CustomPop(int* heap, int* heapSize)
{
	if (*heapSize == 0)
		return 0;

	int root = heap[0];
	heap[0] = heap[--(*heapSize)];	// 현재 힙의 마지막 원소
	int parent = 0;
	int child = 2 * parent + 1;

	while (child < *heapSize)
	{
		// 오른쪽 자식이 존재하고 더 크면 선택
		if (child + 1 < *heapSize && heap[child] < heap[child + 1])
			child++;

		// 부모가 더 크면 정렬 완료
		if (heap[parent] >= heap[child])
			break;
		CustomSwap(&heap[parent], &heap[child]);
		parent = child;
		child = 2 * parent + 1;
	}
	return root;
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

	int heap[100001];
	int heapSize = 0;
	int N;
	cin >> N;

	while (N--)
	{
		int x;
		cin >> x;
		if (x == 0)
			cout << CustomPop(heap, &heapSize) << '\n';
		else
			CustomPush(heap, &heapSize, x);
	}

	return 0;
}