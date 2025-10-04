#include <iostream>
#include <vector>

using namespace std;

void Solution(vector<int> angles)
{
	int A = angles[0];
	int B = angles[1];
	int C = angles[2];

	int sum = A + B + C;

	if (sum != 180)
		cout << "Error" << '\n';
	else if (A == 60 && B == 60 && C == 60)
		cout << "Equilateral" << '\n';
	else if (A == B || A == C || B == C)
		cout << "Isosceles" << '\n';
	else
		cout << "Scalene" << '\n';
}

int main()
{
	vector<int> vertices(3);
	for (int i = 0; i < 3; i++)
	{
		cin >> vertices[i];
	}

	Solution(vertices);
	return 0;
}