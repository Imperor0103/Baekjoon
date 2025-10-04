#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

void Solution(vector<pair<long long, long long>> vertices)
{
	long long xMin = INT_MAX;
	long long xMax = INT_MIN;
	long long yMin = INT_MAX;
	long long yMax = INT_MIN;

	for (int i = 0; i < vertices.size(); i++)
	{
		long long x = vertices[i].first;
		long long y = vertices[i].second;

		if (x < xMin)
			xMin = x;
		if (x > xMax)
			xMax = x;

		if (y < yMin)
			yMin = y;
		if (y > yMax)
			yMax = y;
	}
	long long width = xMax - xMin;
	long long height = yMax - yMin;
	cout << width * height << '\n';
}

int main()
{
	int n;
	cin >> n;
	vector<pair<long long, long long>> vertices(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vertices[i].first >> vertices[i].second;
	}

	Solution(vertices);
	return 0;
}