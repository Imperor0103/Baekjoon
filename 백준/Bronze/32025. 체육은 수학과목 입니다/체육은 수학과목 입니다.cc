#include <iostream>

using namespace std;

int FindDiameter(int h, int w)
{
	return h > w ? w : h;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int H, W;
	cin >> H;
	cin >> W;

	int radius = 50 * FindDiameter(H, W);
	cout << radius << '\n';
	return 0;
}