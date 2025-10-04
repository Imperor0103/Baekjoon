#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;

	return a.second < b.second;
}

void Solution(vector<pair<int, int>> meetings)
{
	int sum = 0;	// 경과 시간의 합
	int count = 0;	// 개수

	for (int i = 0; i < meetings.size(); i++)
	{
		if (meetings[i].first >= sum)
		{
			count++;
			sum = meetings[i].second;
		}
	}
	cout << count << "\n";
}

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> meetings(n);

	for (int i = 0; i < n; i++)
	{
		cin >> meetings[i].first >> meetings[i].second;
	}

	// 끝나는 시간이 빠른 것부터 선택해야하므로, 끝나는 시간을 오름차순 정렬
	sort(meetings.begin(), meetings.end(), Compare);

	Solution(meetings);
	return 0;
}

