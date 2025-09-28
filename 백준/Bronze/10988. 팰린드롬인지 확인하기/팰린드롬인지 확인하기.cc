#include <iostream>
#include <string>

using namespace std;

int Palindrome(string str)
{
	bool isPalindrome = false;
	for (int i = 0; i < str.length() / 2; i++)
	{
		if (str[i] != str[str.length() - 1 - i])
			return 0;	// 하나라도 다르면 palindrome 아님
	}
	return 1;	// 모두 같아야 palindrome
}

void Solution(string str)
{
	// 대문자는 소문자로 바꾸어 저장한다
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = tolower(static_cast<unsigned char>(str[i]));
	}
	cout << Palindrome(str);
}

int main()
{
	string str;
	cin >> str; // 소문자로이루어진
	
	Solution(str);
	return 0;
}