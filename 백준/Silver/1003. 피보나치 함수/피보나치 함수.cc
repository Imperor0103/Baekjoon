#include <iostream>

using namespace std;

void ArrInit(int* zero, int* one)
{
	zero[0] = 1; one[0] = 0;	// fibonacci(0)은 무조건 0을 리턴한다
	zero[1] = 0; one[1] = 1;	// fibonacci(1)은 무조건 1을 리턴한다

	for (int i = 2; i < 41; i++)
	{
		zero[i] = zero[i - 1] + zero[i - 2];
		one[i] = one[i - 1] + one[i - 2];
	}
}

void Solution(int* zero, int* one, int test)
{
	while (test--)
	{
		int num;
		cin >> num;
		cout << zero[num] << " " << one[num] << "\n";
	}
}

int main()
{
	int test;
	cin >> test;
	cin.ignore(); // 버퍼에 남아있는 개행 제거

	int zero[41];
	int one[41];

	ArrInit(zero, one);
	Solution(zero, one, test);

	return 0;
}
