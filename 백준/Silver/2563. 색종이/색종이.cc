#include <iostream>

using namespace std;

const int paperEdge = 10;

void ArrInit(bool (*matrix)[100], int leftSide, int bottomSide)
{
	for (int j = leftSide; j < leftSide + paperEdge; j++)
	{
		for (int i = 99 - bottomSide; i > 99 - bottomSide - paperEdge; i--)
		{
			if (matrix[i][j] == false)
				matrix[i][j] = true;
			else
				continue;
		}
	}
}

void Solution(bool (*matrix)[100], int size)
{
	int area = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (matrix[i][j])
				area += (int)matrix[i][j];
		}
	}
	cout << area << '\n';
}

int main()
{
	bool paper[100][100] = { false };
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int leftSide;
		int bottomSide;
		cin >> leftSide >> bottomSide;
		cin.ignore(); // 남아 있는 '\n'을 무시
		ArrInit(paper, leftSide, bottomSide);
	}
	Solution(paper, 100);

	return 0;
}