#include <iostream>
#include <string>
#include <vector>

using namespace std;

int ParseAndSum(string* str)
{
	int sum = 0;
	int value = 0;

	for (int i = 0; i <= str->length(); i++)
	{
		if (i == str->size() || (*str)[i] == '+')
		{
			sum += value;
			value = 0;
		}
		else
		{
			value = value * 10 + ((*str)[i] - '0');
		}
	}
	return sum;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	vector<string> parts;
	string temp = "";

	for (int i = 0; i <= str.length(); i++)
	{
		// 문자열 끝에서 음수 덩어리, '-' 앞에서 양수 덩어리 완성
		if (i == str.length() || str[i] == '-')
		{
			parts.push_back(temp);
			temp = "";
		}
		else
		{
			temp += str[i];
		}
	}

	// 처음에 숫자로 시작하니까 양수 덩어리
	int result = ParseAndSum(&parts[0]);

	// 다음은 음수와 +로 이루어진 덩어리
	for (int i = 1; i < parts.size(); i++)
	{
		result -= ParseAndSum(&parts[i]);
	}
	cout << result << '\n';
	return 0;
}