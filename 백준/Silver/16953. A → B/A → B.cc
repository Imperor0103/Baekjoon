#include <iostream>

using namespace std;

int Solution(long long A, long long B)
{
	if (A == B) return 1;      
	int count = 0;
	while (B > A) 
	{
		if (B % 10 == 1) 
		{
			B /= 10;
			count++;
		}
		else if (B % 2 == 0) 
		{
			B /= 2;
			count++;
		}
		else 
		{
			return -1;
		}
	}
	return (B == A) ? count + 1 : -1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long A, B;
	cin >> A >> B;

	cout << Solution(A, B) << '\n';

	return 0;
}