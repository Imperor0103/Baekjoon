#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int MaxWeight(vector<int>* ropes)
{	
	sort((*ropes).begin(), (*ropes).end(),
		[](int i, int j)
		{
			return i < j;
		});

	int size = (*ropes).size();
	int maxWeight = 0;
	for (int i = 0; i < size; i++)
	{
		int temp = (*ropes)[i] * (size - i);
		maxWeight = maxWeight < temp ? temp : maxWeight;
	}
	return maxWeight;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	vector<int> ropes;

	while (N--)
	{
		int K;
		cin >> K;
		ropes.push_back(K);
	}

	cout << MaxWeight(&ropes) << '\n';
	return 0;
}