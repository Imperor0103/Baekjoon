#include <iostream>
#include <string>

using namespace std;

void CountAlphabet(const string* s, int* arr)
{
	for (int i = 0; i < s->length(); i++)
	{
		arr[(*s)[i] - 'a']++;
	}
}

void PrintCounts(const int* arr)
{
	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[26] = { 0 };
	

	string str;
	cin >> str;

	CountAlphabet(&str, arr);
	PrintCounts(arr);

	return 0;
}