#include <iostream>

using namespace std;


void Solution(int num)
{
	for (int i = 1; i <= num; i++)
	{
		// 공백
		for (int j = 0; j < num - i; j++)
		{
			cout << " ";
		}
		// *
		for (int j = 0; j < 2 * i - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = num - 1; i >= 1; i--)
	{
		// 공백
		for (int j = 0; j < num - i; j++)
		{
			cout << " ";
		}
		// *
		for (int j = 0; j < 2 * i - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	int num;
	cin >> num;

	Solution(num);
	return 0;
}
