#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void DFS(vector<vector<int>>* graph, vector<int>* visited, int* order, int node)
{
	(*visited)[node] = (*order)++;	// 현재 노드 방문 순서 기록

	for (int i = 0; i < (*graph)[node].size(); i++)
	{
		int next = (*graph)[node][i];
		if ((*visited)[next] == 0)
			DFS(graph, visited, order, next);
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
		// 방문 순서를 오름차순으로 정렬
		sort(graph[i].begin(), graph[i].end());
	}

	DFS(&graph, &visited, &order, R);

	for (int i = 1; i <= N; i++)
		cout << visited[i] << '\n';

	return 0;
}