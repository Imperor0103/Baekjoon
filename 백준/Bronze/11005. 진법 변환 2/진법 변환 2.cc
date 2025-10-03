#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string Solution(string numStr, int form)
{
	int value = 0;
	for (int i = 0; i < numStr.size(); i++)
	{
		value = value * 10 + (numStr[i] - '0');	// '0'을 빼지 않으면 ascii 값이 저장된다
	}

	string result;
	while (value > 0)
	{
		int remainder = value % form;
		if (remainder < 10)
			result.push_back(remainder + '0');	// ascii 값으로 저장
		else
			result.push_back(remainder - 10 + 'A');	
		value /= form;
	}	
	reverse(result.begin(), result.end());

	return result;
}

int main()
{
	string numStr;
	int form;
	cin >> numStr >> form;

	string result = Solution(numStr, form);
	cout << result << '\n';
	return 0;
}