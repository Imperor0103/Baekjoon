#include <iostream>
#include <string>
using namespace std;

int Recursion(const string* str, int l, int r, int* count)
{
	(*count)++;
	if (l >= r)
		return 1;
	else if ((*str)[l] != (*str)[r])
		return 0;
	else
		return Recursion(str, l + 1, r - 1, count);
}

int IsPalindrome(const string* str, int* count)
{
	*count = 0;
	return Recursion(str, 0, str->length() - 1, count);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	while (T--)
	{
		string s;
		cin >> s;

		int count = 0;
		int result = IsPalindrome(&s, &count);

		cout << result << " " << count << '\n';
	}	
	return 0;
}