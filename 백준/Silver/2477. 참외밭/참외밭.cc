#include <iostream>
#include <vector>

using namespace std;

int CalculateExtent(const vector<int>& dirs, vector<int>& lens)
{
	int maxW = 0, maxH = 0;
	int maxIdxW = 0, maxIdxH = 0;
	int minW = 0, minH = 0;
	int minIdxW = 1000, minIdxH = 1000;

	for (int i = 0; i < dirs.size(); i++)
	{
		// 가장 큰 직사각형 찾기
		if (dirs[i] == 1 || dirs[i] == 2)
		{
			if (lens[i] > maxW)
			{
				maxW = lens[i];
				maxIdxW = i;
			}
		}
		else if (dirs[i] == 3 || dirs[i] == 4)
		{
			if (lens[i] > maxH)
			{
				maxH = lens[i];
				maxIdxH = i;
			}
		}
	}
	// 가장 작은 직사각형 찾기
	int smallW = abs(lens[(maxIdxW + 5) % 6] - lens[(maxIdxW + 1) % 6]);
	int smallH = abs(lens[(maxIdxH + 5) % 6] - lens[(maxIdxH + 1) % 6]);

	int maxArea = maxW * maxH;
	int minArea = smallW * smallH;
	return maxArea - minArea;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> lens;
	vector<int> dirs;

	int K;
	cin >> K;

	int x, y = 0;	// (0,0) 시작
	int num = 6;

	for (int i = 0; i < num; i++)
	{
		int dir, value;
		cin >> dir >> value;

		dirs.push_back(dir);
		lens.push_back(value);
	}
	int result = K * CalculateExtent(dirs, lens);
	cout << result << '\n';
	return 0;
}