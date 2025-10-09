#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

set<string> InputWords(int count)
{
	set<string> words;	// 중복 방지
	while (count--)
	{
		string s;
		cin >> s;
		words.insert(s);
	}
	return words;
}

vector<string> SortWords(const set<string>& uniqueWords)
{
	vector<string> words(uniqueWords.begin(), uniqueWords.end());

	sort(words.begin(), words.end(),
		[](const string& a, const string& b)
		{
			if (a.size() == b.size())
				return a < b;	// 길이가 같으면 사전순
			return a.size() < b.size();	// 길이가 다르면 긴 것 우선
		});

	return words;
}

void PrintWords(const vector<string>& words)
{
	for (int i = 0; i < words.size(); i++)
	{
		cout << words[i] << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	set<string> uniqueWords = InputWords(N);
	vector<string> words = SortWords(uniqueWords);
	PrintWords(words);

	return 0;
}