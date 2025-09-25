#include <iostream>
#include <string.h>
#include <utility> // pair
#include <vector>

using namespace std;

void Solution(vector<pair<int, string>> data)
{
	for (int i = 0; i < data.size(); i++)
	{
		int num = data[i].first;
		string str = data[i].second;

		for (int j = 0; j < str.length(); j++)
		{
			for (int k = 0; k < num; k++)
			{
				cout << str[j];
			}
		}
		cout << endl;
	}
}

int main()
{
	// 문자열 개수
	int count;
	cin >> count;

	vector<pair<int, string>> data;

	for (int i = 0; i < count; i++)
	{
		// 숫자, 문자열 입력
		int num;
		string str;
		cin >> num;
		cin >> str;
		data.push_back({ num, str });
	}

	Solution(data);
}

