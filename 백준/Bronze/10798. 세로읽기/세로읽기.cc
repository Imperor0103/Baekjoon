#include <iostream>
#include <string>

using namespace std;

void ArrInit(char (*matrix)[15], int size)
{
	for (int i = 0; i < size; i++)
	{
		string line;
		getline(cin, line);

		for (int j = 0; j < 15; j++)
		{
			if (j < line.size())
				matrix[i][j] = line[j];
			else
				matrix[i][j] = ' ';
		}
	}
}

void Solution(char (*matrix)[15], int size)
{
	int row = 1;
	int col = 1;
	string str;
	for (int j = 0; j < 15; j++)
	{
		for (int i = 0; i < size; i++)
		{
			if (matrix[i][j] != ' ' && matrix[i][j] != '\0')
				str += matrix[i][j];
		}
	}
	cout << str << '\n';
}

int main()
{
	char matrix[5][15];
	ArrInit(matrix, 5);
	Solution(matrix, 5);

	return 0;
}