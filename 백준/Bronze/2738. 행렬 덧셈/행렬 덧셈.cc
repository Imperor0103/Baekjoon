#include <iostream>
#include <string>
#include <vector>

using namespace std;

void InputNumber(vector<vector<int>>* matrix)
{
	for (int i = 0; i < matrix->size(); i++)
	{
		string line;
		getline(cin, line);

		int num = 0, j = 0;
		bool isNumber = false;

		line.push_back(' '); // 마지막 숫자에 공백을 추가하여 어떠한 경우라도 line이 공백으로 끝나게 한다

		// parsing
		for (char c : line)
		{
			if (j == (*matrix)[i].size())
				break;

			if (isdigit(c))
			{
				num = num * 10 + (c - '0');
				isNumber = true;
			}
			else if (c == ' ' && isNumber)	// line은 항상 공백으로 끝나므로 무조건 해당 분기를 지난다
			{
				(*matrix)[i][j++] = num;
				num = 0;
				isNumber = false;
			}
		}
	}
}

vector<vector<int>> AddMatrix(vector<vector<int>> matrix1, vector<vector<int>> matrix2)
{
	vector<vector<int>> result(matrix1.size(), vector<int>(matrix1[0].size()));

	for (int i = 0; i < matrix1.size(); i++)
	{
		for (int j = 0; j < matrix1[0].size(); j++)
		{
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	return result;
}

void Solution(vector<vector<int>> matrix)
{
	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix[i].size(); j++)
		{
			cout << matrix[i][j];
			if (j != matrix[i].size() - 1) // 마지막 열이 아니면 공백
				cout << " ";
		}
		cout << "\n"; // 행 끝마다 줄바꿈
	}
}

int main()
{
	int n;
	int m;
	cin >> n >> m;
	cin.ignore(); // 버퍼에 남아있는 개행 제거

	vector<vector<int>> a(n, vector<int>(m));
	vector<vector<int>> b(n, vector<int>(m));

	InputNumber(&a);
	InputNumber(&b);

	vector<vector<int>> matrix = AddMatrix(a, b);
	Solution(matrix);
	return 0;
}

