#include<string>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

set<int> candidates;  // 중복 제거, 전역으로 사용해야 이전에 저장한 것을 보존

bool IsPrime(int num)
{
	if (num < 2) return false;
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}

// current: 지금까지 만든 문자열
// remain: 아직 사용하지 않은 숫자들
void DFS(string current, string remain)
{
	if (!current.empty())
		candidates.insert(stoi(current));	// 숫자로 변환해 저장

	for (int i = 0; i < remain.size(); i++) 
	{
		// i번째 숫자를 꺼내서 이어 붙임
		DFS(current + remain[i], remain.substr(0, i) + remain.substr(i + 1));
	}
}


int solution(string numbers) 
{
	candidates.clear();
	DFS("", numbers);

	int answer = 0;
	for (int num : candidates) 
	{
		if (IsPrime(num)) answer++;
	}
	return answer;

}