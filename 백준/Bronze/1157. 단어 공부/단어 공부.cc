#include <iostream>
#include <string>

using namespace std;

int countAlphabet[26] = { 0 };

void Solution(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		// 해당 숫자의 알파벳을 소문자로 바꾸고, ascii 비교
		// a는 97
		str[i] = tolower(static_cast<unsigned char>(str[i]));

		countAlphabet[str[i] - 'a']++;
	}

	int max = -1;
	int idx = 0;
	bool isDuplicate = false;
	for (int i = 0; i < 26; i++)
	{
		if (max < countAlphabet[i])
		{
			max = countAlphabet[i];
			idx = i;
			isDuplicate = false;  // 새로운 최댓값이면 중복 아님
		}
		else if (countAlphabet[i] == max)
		{
			isDuplicate = true;
		}
	}
	if (isDuplicate)
	{
		cout << "?";
	}
	else
	{
		cout << static_cast<unsigned char>(idx + 'A');
	}
}

int main()
{
	string str;
	cin >> str; 
	
	Solution(str);
	return 0;
}