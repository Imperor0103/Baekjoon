#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	while (N--)
	{
		string s;
		cin >> s;

		int score = 0;
		int combo = 0;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'O')
			{
				combo++;
				score += combo;
			}
			else
				combo = 0;
		}
		cout << score << '\n';
	}
}