#pragma once

#include <iostream>
#include <string>
using namespace std;

// 알파벳으로만 이루어진 단어를 입력받아, 그 길이를 출력하는 프로그램을 작성하시오.

void PrintLength(string str)
{
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		// ASCII 
		if (str[i] >= 65 && str[i] < 123)
			count++;
		else
			return;
	}
	cout << count << endl;
}

int main()
{
	string str;
	cin >> str;

	PrintLength(str);
}