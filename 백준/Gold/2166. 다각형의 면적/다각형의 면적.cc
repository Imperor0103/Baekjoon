#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long double TriangleArea(vector<pair<int,int>>& vertices, int i, int j)
{
	long double a = vertices[0].first, b = vertices[0].second;
	long double c = vertices[i].first, d = vertices[i].second;
	long double e = vertices[j].first, f = vertices[j].second;

	return (a * d + c * f + e * b - c * b - e * d - a * f) / 2;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<pair<int, int>> vertices;

	int N;
	cin >> N;

	while (N--)
	{
		int x, y;
		cin >> x >> y;
		vertices.push_back({ x,y });
	}

	long double answer = 0;
	for (int i = 1; i < vertices.size() - 1; i++)
	{
		answer += TriangleArea(vertices, i, i + 1);
	}
	cout << fixed;
	cout.precision(1);
	cout << abs(answer) << '\n';
	return 0;
}