#include <iostream>
#include <queue>

using namespace std;

int LastCard(queue<int>* q)
{
	while ((*q).size() > 1)
	{
		(*q).pop();
		(*q).push((*q).front());
		(*q).pop();
	}
	return (*q).front();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	queue<int> q;

	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}

	cout << LastCard(&q) << '\n';

	return 0;
}