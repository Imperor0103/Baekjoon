#include <iostream>

using namespace std;

long long factorial(int num)
{
	if (num == 0 || num == 1)
		return 1;
	else if (num > 1)
		return num * factorial(num - 1);
}

void Solution(int value)
{
	long long result = factorial(value);
	cout << result << '\n';
}

int main()
{
	int n;
	cin >> n;

	Solution(n);
	return 0;
}