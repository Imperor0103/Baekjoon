#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int BFS(long long A, long long B)
{
	queue<pair<long long, int>> q;
	q.push({ A, 1 });  

	while (!q.empty())
	{
		pair<long long, int> cur = q.front();
		q.pop();

		long long val = cur.first;
		int cnt = cur.second;

		if (val == B)
		{
			return cnt;
		}

		long long next1 = val * 2;
		long long next2 = val * 10 + 1;

		if (next1 <= B)
			q.push({ next1, cnt + 1 });
		if (next2 <= B)
			q.push({ next2, cnt + 1 });
	}
	return -1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long A, B;
	cin >> A >> B;

	int result = BFS(A, B);
	cout << result << '\n';
	return 0;
}
