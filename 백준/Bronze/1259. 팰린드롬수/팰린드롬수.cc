#include <iostream>
#include <string>

using namespace std;

bool IsPalindrome(const string* str)
{
	for (int i = 0; i < str->length() / 2; i++)
	{
		if ((*str)[i] != (*str)[str->length() - i - 1])
			return false;
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string line;
	while (true)
	{
		getline(cin, line);
		if (line == "0")
			break;

		if (IsPalindrome(&line))
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
	return 0;
}