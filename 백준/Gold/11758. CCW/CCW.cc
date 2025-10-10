#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long double MakeDir(vector<pair<int, int>>& vertices, vector<pair<int, int>>& dirs, int i, int j, int k)
{
	long double a = vertices[i].first, b = vertices[i].second;
	long double c = vertices[j].first, d = vertices[j].second;
	long double e = vertices[k].first, f = vertices[k].second;

	return (a * d + c * f + e * b - c * b - e * d - a * f) / 2;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<pair<int, int>> vertices;
	vector<pair<int, int>> dirs;

	int num = 3;

	while (num--)
	{
		int x, y;
		cin >> x >> y;
		vertices.push_back({ x,y });
	}

	long double answer = MakeDir(vertices, dirs, 0, 1, 2);
	if (answer < 0)
		cout << "-1" << '\n';
	else if (answer == 0)
		cout << "0" << '\n';
	else if (answer > 0)
		cout << "1" << '\n';

	return 0;
}