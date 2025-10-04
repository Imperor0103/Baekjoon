#include <iostream>
#include <vector>
using namespace std;

void Solution(vector<int> coins, int value)
{
	int count = 0;
	// 각 동전이 이전 동전의 배수라면 최적해가 되어 greedy algorithm이 성립한다
	for (int i = coins.size() - 1; i >= 0; i--)
	{
		int divisor = coins.back();	// last
		coins.pop_back();	// remove

		count += value / divisor;
		value %= divisor;
	}
	cout << count << "\n";
}

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> coins;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;		
		coins.push_back(num);
	}

	Solution(coins, k);
	return 0;
}