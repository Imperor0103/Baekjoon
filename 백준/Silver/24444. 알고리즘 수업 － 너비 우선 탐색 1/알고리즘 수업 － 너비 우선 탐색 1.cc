#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void BFS(vector<vector<int>>* graph, vector<int>* visited, int* order, int start)
{
	queue<int> q;
	q.push(start);
	(*visited)[start] = (*order)++;	// 시작 정점 방문

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		for (int i = 0; i < (*graph)[cur].size(); i++)
		{
			int next = (*graph)[cur][i];
			if ((*visited)[next] == 0)
			{
				(*visited)[next] = (*order)++;
				q.push(next);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, R;
	cin >> N >> M >> R;

	vector<vector<int>> graph(N + 1);	// 인접 리스트
	vector<int> visited(N + 1, 0);	// 방문 순서 저장
	int order = 1;

	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;

		// 무방향그래프이므로 간선 정보를 양쪽 모두 추가
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i <= N; i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}

	BFS(&graph, &visited, &order, R);

	for (int i = 1; i <= N; i++)
		cout << visited[i] << '\n';

	return 0;
}