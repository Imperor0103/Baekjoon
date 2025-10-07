#include <iostream>
#include <cmath>
using namespace std;

long long Solution(int n)
{
	return pow(2, n) + 1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	long long side = Solution(N);
	cout << side * side << '\n';
	return 0;
}