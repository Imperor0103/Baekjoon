#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Solution(vector<int> withdrawing)
{
	int sum = 0;	// 개인이 기다리는 시간
	int total = 0;	// 사람들이 기다리는 시간

	for (int i = 0; i < withdrawing.size(); i++)
	{
		int waiting = sum;
		sum = waiting + withdrawing[i];
		total += sum;
	}
	cout << total << "\n";
}

int main()
{
	int n;
	cin >> n;

	vector<int> withdrawing(n);

	for (int i = 0; i < n; i++)
	{
		cin >> withdrawing[i];
	}

	// 기다리는 시간의 합을 최소로 하려면, 작업시간이 짧게 걸리는 사람부터 처리해야한다
	sort(withdrawing.begin(), withdrawing.end(), 
		[](int a, int b)
		{
			return a < b;
		});

	Solution(withdrawing);
	return 0;
}