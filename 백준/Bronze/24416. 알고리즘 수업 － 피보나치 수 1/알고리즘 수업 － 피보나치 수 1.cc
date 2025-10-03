#include <iostream>

using namespace std;

int countRecursive = 0;
int countDp = 0;

int fibonacci(int n)
{
	if (n == 1 || n == 2)
	{
		countRecursive++;	// 코드1
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int fib(int n)
{
	int* f = new int[n + 1];
	f[0] = 0;
	f[1] = 1;
	if (n >= 2)
		f[2] = 1;

	for (int i = 3; i < n + 1; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		countDp++;	 // 코드2
	}
	int result = f[n];
	delete[] f;
	return result;
}

void Solution(int n)
{
	fibonacci(n);
	fib(n);

	cout << countRecursive << " " << countDp << "\n";
}

int main()
{
	int n;
	cin >> n;

	Solution(n);
	return 0;
}

