#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	sort(str.begin(), str.end(), greater<char>());

	cout << str << '\n';
	return 0;
}