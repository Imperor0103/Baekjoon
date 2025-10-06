#include <iostream>
#include <string>
using namespace std;

const int maxLine = 50;

bool IsVPS(const char* str)
{
	char arr[maxLine];
	int top = 0;

	while (*str != '\0')
	{
		if (*str == '(')
		{
			arr[top++] = *str;	// push
		}
		else if (*str == ')')
		{
			if (top == 0)
				return false;
			top--;	// pop
		}
		str++;	
	}
	return top == 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		char input[maxLine + 1];	// 마지막에 '\0'
		cin >> input;

		if (IsVPS(input))
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}

	return 0;
}