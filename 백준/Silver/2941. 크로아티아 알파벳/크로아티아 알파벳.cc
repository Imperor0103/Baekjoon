#include <iostream>
#include <string>

using namespace std;


void Solution(string str)
{
	int count = 0;
	int i = 0;
	while (i < str.length())
	{
		if (i + 2 < str.length() && str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
		{
			i += 3;	// dz=
		}
		else if (i + 1 < str.length() &&
			(str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-')) ||
			(str[i] == 'd' && str[i + 1] == '-') ||
			(str[i] == 'l' && str[i + 1] == 'j') ||
			(str[i] == 'n' && str[i + 1] == 'j') ||
			(str[i] == 's' && str[i + 1] == '=') ||
			(str[i] == 'z' && str[i + 1] == '='))
		{
			i += 2;	// 두 글자 처리
		}
		else 
			i++;	// 한 글자 처리
		count++;
	}
	cout << count;
}

int main()
{
	string str;
	cin >> str; 
	
	Solution(str);
	return 0;
}
