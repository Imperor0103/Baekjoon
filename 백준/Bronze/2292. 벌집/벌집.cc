#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int layer = 1;      // 현재 층 (시작은 1)
	int maxNum = 1;     // 현재 층의 마지막 숫자

	while (N > maxNum)
	{
		maxNum += 6 * layer;
		layer++;
	}

	cout << layer << '\n';
	return 0;
}