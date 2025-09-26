#include <iostream>
#include <string>

using namespace std;

void Solution(string str)
{
	if (str.empty())
	{
		cout << 0;
		return;
	}

	int count = 0;
	// 공백->단어 가 될때 단어 개수가 추가된다
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && (i ==0 || str[i-1] == ' '))
			count++;
	}
	cout << count;
}
int main()
{
	string str;
	getline(cin, str);	// 공백 포함 문자열입력

	Solution(str);
}