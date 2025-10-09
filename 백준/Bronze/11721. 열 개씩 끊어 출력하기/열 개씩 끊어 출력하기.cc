#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i += 10)
	{
		cout << str.substr(i, 10) << '\n';
	}
	return 0;
}