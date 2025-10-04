#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

void Solution(tuple<int, int, int> triangle)
{
	int a = get<0>(triangle);
	int b = get<1>(triangle);
	int c = get<2>(triangle);

	if (a == 0 && b == 0 && c == 0)
		return;

	int maxEdge = a;    // 일단 a를 최대값으로 설정
	if (b > maxEdge)    // b가 더 크면 maximum 갱신
		maxEdge = b;
	if (c > maxEdge)    // c가 더 크면 maximum 갱신
		maxEdge = c;

	int sum = a + b + c;

	if (maxEdge >= sum - maxEdge)
		cout << "Invalid" << '\n';
	else if (a == b && b == c)
		cout << "Equilateral" << '\n';
	else if (a == b || a == c || b == c)
		cout << "Isosceles" << '\n';
	else
		cout << "Scalene" << '\n';
}

int main()
{
	vector<tuple<int, int, int>> triangles(3);
	bool isValid = true;
	while (isValid)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			isValid = !isValid;

		triangles.push_back({ a,b,c });
	}

	for (auto t : triangles)
		Solution(t);
	return 0;
}