#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
	int answer = 0;

	int myLength = strlen(myString);
	int patLength = strlen(pat);

	if (myLength < patLength)
		return 0;

	char* myLower = (char*)malloc(sizeof(char) * (myLength + 1));
	char* patLower = (char*)malloc(sizeof(char) * (patLength + 1));

	for (int i = 0; i < myLength; i++)
	{
		myLower[i] = (myString[i] >= 'A' && myString[i] <= 'Z') ? (myString[i] + 32) : myString[i];
	}
	myLower[myLength] = '\0';

	for (int i = 0; i < patLength; i++)
	{
		patLower[i] = (pat[i] >= 'A' && pat[i] <= 'Z') ? (pat[i] + 32) : pat[i];
	}
	patLower[patLength] = '\0';


	int i = 0;
	while (myLower[i + patLength - 1] != '\0')
	{
		bool isSame = myLower[i] == patLower[0] ? true : false;
		int j = 0;
		while (j < patLength && isSame)
		{
			if (myLower[i + j] != patLower[j])
			{
				isSame = false;
				break;
			}
			else
			{
				isSame = true;
			}
			j++;
		}
		if (isSame)
		{
			answer = 1;
			break;
		}
		i++;
	}
	free(myLower);
	free(patLower);

	return answer;

}