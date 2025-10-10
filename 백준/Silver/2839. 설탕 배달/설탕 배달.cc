#include <iostream>

using namespace std;

int CountBag(int N)
{
	int count = 0;
	while (true)
	{
		if (N % 5 == 0)
			return count + N / 5;

		N -= 3;
		count++;

		if (N < 0)
			return -1;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int count = CountBag(N);
	cout << count << '\n';
	return 0;
}