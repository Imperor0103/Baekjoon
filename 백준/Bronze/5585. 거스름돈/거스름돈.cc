#include <iostream>
#include <vector>

using namespace std;

int CountCoins(vector<int>* coins, int N)
{
	int coinCount = 0;
	for (int i = 0; i < (*coins).size(); i++)
	{
		int divisor = (*coins)[i];
		coinCount += N / divisor;
		N %= divisor;
	}
	return coinCount;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<int> coins = { 500, 100, 50, 10, 5, 1 };
	cout << CountCoins(&coins, 1000 - N) << '\n';
	return 0;
}