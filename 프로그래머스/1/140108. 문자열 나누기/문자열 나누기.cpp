#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	int answer = 0;

	char x;
	int len = 0;

	while (s[len] != '\0')
	{
		x = s[len];
		int numX = 0; // 맨 앞글자
		int numNotX = 0;

		while (s[len] != '\0')
		{
			if (s[len] == x)
				numX++;
			else
				numNotX++;

			len++;
			if (numX == numNotX)
				break;
		}
		answer++;
	}
	return answer;

}