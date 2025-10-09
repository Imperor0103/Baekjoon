#include <iostream>

using namespace std;

bool IsInside(int x, int y, int cx, int cy, int r)
{
	int dx = x - cx;
	int dy = y - cy;
	return (dx * dx + dy * dy) < (r * r);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int n;
		cin >> n;
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			int cx, cy, r;
			cin >> cx >> cy >> r;

			bool isStartInside = IsInside(x1, y1, cx, cy, r);
			bool isEndInside = IsInside(x2, y2, cx, cy, r);

			if (isStartInside != isEndInside)
				count++;
		}
		cout << count << "\n";
	}
	return 0;
}