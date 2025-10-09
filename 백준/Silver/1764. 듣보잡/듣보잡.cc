#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

set<string> InputNeverHeard(int N)
{
	set<string> neverHeard;
	while (N--)
	{
		string name;
		cin >> name;
		neverHeard.insert(name);
	}
	return neverHeard;
}

vector<string> FindIntersection(set<string>& neverHeard, int M)
{
	vector<string> result;
	while (M--)
	{
		string name;
		cin >> name;
		if (neverHeard.count(name))
			result.push_back(name);
	}

	sort(result.begin(), result.end(),
		[](const string& a, const string& b)
		{
			return a < b;
		});

	return result;
}

void PrintResult(const vector<string>& result)
{
	cout << result.size() << '\n';

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	set<string> neverHeard = InputNeverHeard(N);
	vector<string> result = FindIntersection(neverHeard, M);
	PrintResult(result);

	return 0;
}