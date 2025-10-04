#include <iostream>

using namespace std;

void Solution(int x, int y, int w, int h)
{
	int distanceX = x < w - x ? x : w - x;
	int distanceY = y < h - y ? y : h - y;
	int distanceMin = distanceX < distanceY ? distanceX : distanceY;
	cout << distanceMin << '\n';
}

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	Solution(x, y, w, h);
	return 0;
}
