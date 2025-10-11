#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long FindMaxNumber(long long sum)
{
	long long tempSum = 0;
	long long maxCount = 0;
	int i = 1;
	while (true)
	{
		tempSum += i;
		if (tempSum > sum)
			return maxCount;
		// maxCount를 리턴할 때 tempSum은 항상 sum보다 작다
		// 그런데도 성립하는 이유는
		// 로직에서 마지막 더한 수에 sum-tempSum을 더한 수가 실제 마지막에 더해지는 수
		// 그리고 이 경우에 중복되는 수는 없으며
		// 개수가 같기 때문이다
		
		maxCount++;
		i++;
	}		
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long S;
	cin >> S;

	cout << FindMaxNumber(S) << '\n';
	return 0;
}