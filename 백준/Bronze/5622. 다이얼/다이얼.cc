#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int GetDialTime(char c)
{
	c = toupper(static_cast<unsigned char>(c));	// 대문자로 바꾼다

	if (c <= 'C') return 3;    // A B C
	else if (c <= 'F') return 4; // D E F
	else if (c <= 'I') return 5; // G H I
	else if (c <= 'L') return 6; // J K L
	else if (c <= 'O') return 7; // M N O
	else if (c <= 'S') return 8; // P Q R S
	else if (c <= 'V') return 9; // T U V
	else return 10;              // W X Y Z
}

void Solution(string str)
{
	int sum = 0;
	for (int i = 0; i < str.length(); i++)
	{
		sum += GetDialTime(str[i]);
	}
	cout << sum;
}

int main()
{
	string A;
	cin >> A;
	Solution(A);
}