#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
	int answer = 0;

	// p의 글자수를 찾는다
	int pLength = 0;
	while (p[pLength] != '\0')
	{
		pLength++;
	}
	// t에서 하나씩 읽으며 글자수만큼 자른다
	int i = 0;
	while (t[i + pLength - 1] != '\0')
	{
		bool isHigher = t[i] > p[0] ? true : false;
		int j = 0;
		while (j < pLength && !isHigher)
		{
			if (t[i + j] < p[j])
			{
				isHigher = false;
				break;	// 비교 끝
			}
			else if (t[i + j] == p[j])
			{
				isHigher = false;	// 같으면 한번 더 비교
			}
			else
			{
				isHigher = true;
				break;	// 비교 끝
			}
			j++;
		}
		if (!isHigher)
		{
			answer++;
		}
		i++;
	}
	return answer;

}