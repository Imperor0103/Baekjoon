#include <iostream>
#include <string>
#include <vector>

using namespace std;

int wordCount = 0;

void Checker(string str)
{
	bool arr[26] = { false };
	int i = 0;
	char prev = 0;
	while (i < str.length())
	{
		char c = str[i];
		if (c != prev)
		{
			if (arr[c - 'a'])
				return;
			arr[c - 'a'] = true;
		}
		prev = c;
		i++;
	}
	wordCount++;
}

void Solution(vector<string> str)
{
	for (int i = 0; i < str.size(); i++)
	{
		Checker(str[i]);
	}
	cout << wordCount;
}

int main()
{
	// 단어 n개 입력
	int num;
	cin >> num;

	vector<string> str(num);
	for (int i = 0; i < num; i++)
	{
		cin >> str[i];
	}

	Solution(str);
	return 0;
}

