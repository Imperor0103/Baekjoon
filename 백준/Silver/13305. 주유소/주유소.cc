#include <iostream>
#include <vector>

using namespace std;

long long TotalMin(vector<long long>* price, vector<long long>* dist)
{
	long long totalCost = 0;
	long long minPrice = (*price)[0];
	int size = (*price).size();

	for (int i = 0; i < size - 1; i++)
	{
		if ((*price)[i] < minPrice)
			minPrice = (*price)[i];
		totalCost += minPrice * (*dist)[i];
	}

	return totalCost;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<long long> dist(N - 1);
	vector<long long> price(N);
	for (int i = 0; i < N - 1; i++)
		cin >> dist[i];
	for (int i = 0; i < N; i++)
		cin >> price[i];

	cout << TotalMin(&price, &dist) << '\n';

	return 0;
}