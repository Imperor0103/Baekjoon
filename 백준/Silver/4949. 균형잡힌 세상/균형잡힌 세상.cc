#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool IsBalanced(const string* line, stack<char>* st)
{
	while (!st->empty())
	{
		st->pop();
	}

	for (int i = 0; i < line->size(); i++)
	{
		char c = (*line)[i];
		if (c=='(' || c=='[')
			st->push(c);
		else if (c == ')')
		{
			if (st->empty() || st->top() != '(')
				return false;
			st->pop();
		}
		else if (c == ']')
		{
			if (st->empty() || st->top() != '[')
				return false;
			st->pop();				
		}		
	}
	return st->empty();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string line;
	stack<char> st;
	while (true)
	{
		getline(cin, line);
		if (line == ".")
			break;

		if (IsBalanced(&line, &st))
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
	return 0;
}