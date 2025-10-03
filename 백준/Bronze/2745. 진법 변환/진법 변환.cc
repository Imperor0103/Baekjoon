#include <iostream>
#include <string>

using namespace std;

void Solution(string numStr, int form)
{
	int value = 0;
	int result = 0;
	for (int i = 0; i < numStr.size(); i++)
	{
		numStr[i] = toupper(static_cast<unsigned char>(numStr[i]));

		char c = numStr[i];
		if (c >= '0' && c <= '9')
			value = c - '0';
		else if (c >= 'A' && c <= 'Z')
			value = c - 'A' + 10;
		else
			return;

		if (value >= form)
			return;

		result = result * form + value;
	}
	cout << result << '\n';	
}

int main()
{
	string numStr;
	int form;
	cin >> numStr >> form;

	Solution(numStr, form);

	return 0;
}