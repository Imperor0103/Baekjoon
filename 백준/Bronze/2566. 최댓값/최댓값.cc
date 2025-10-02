#include <iostream>
#include <string>

using namespace std;

void ArrInit(int (*matrix)[9])
{
	for (int i = 0; i < 9; i++)
	{
		string line;
		getline(cin, line);

		int num = 0;      // 현재 숫자 누적
		int j = 0;        // 열 인덱스
		bool isNumber = false;

		line.push_back(' '); // 마지막 숫자까지 처리할 수 있도록 공백 추가

		for (char c : line)
		{
			if (j == 9) break; // 한 행에는 9개까지만

			if (isdigit(c))  // 숫자라면 누적
			{
				num = num * 10 + (c - '0');
				isNumber = true;
			}
			else if (c == ' ' && isNumber) // 숫자가 끝났을 때
			{
				matrix[i][j++] = num; // 배열에 저장
				num = 0;
				isNumber = false;
			}
		}
	}
}

void Solution(int (*matrix)[9])
{
	int row = 1;
	int col = 1;
	int max = -1;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	}
	cout << max << '\n';
	cout << row << " "<< col << '\n';
}

int main()
{
	int matrix[9][9];
	ArrInit(matrix);
	Solution(matrix);

	return 0;
}