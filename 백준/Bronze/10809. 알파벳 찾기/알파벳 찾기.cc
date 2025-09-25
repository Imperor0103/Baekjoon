#include <iostream>
#include <string.h>
using namespace std;

void Solution(string str)
{
	int arr[26];
	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}

	for (int i = 0; i < str.length(); i++)
	{
		if (arr[str[i] - 97] == -1)
			arr[str[i] - 97] = i;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	string str = "";
	cin >> str;


	Solution(str);
}

