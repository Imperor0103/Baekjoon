#include <iostream>

using namespace std;

void Solution(int change)
{
	// 각 동전이 이전 동전의 배수라면 최적해가 되어 greedy algorithm이 성립한다
	int quarter = change / 25;	// 25
	change %= 25;

	int dime = change / 10;	// 10
	change %= 10;

	int nickel = change / 5;	// 5
	change %= 5;

	int penny = change;	// 1

	cout << quarter << " " << dime << " " << nickel << " " << penny << "\n";
}

int main()
{
	int t;
	cin >> t;

	int change;
	for (int i = 0; i < t; i++)
	{
		cin >> change;
		Solution(change);
	}

	return 0;
}
