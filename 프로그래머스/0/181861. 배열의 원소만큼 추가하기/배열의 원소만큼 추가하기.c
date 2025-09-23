#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
	int* answer = (int*)malloc(0);
	int size = 0;

	for (int i = 0; i < arr_len; i++)
	{
		int temp = size;	// 기존 answer 배열의 크기
		size += arr[i];
		int* tempArr = (int*)malloc(size * sizeof(int));
		for (int j = 0; j < temp; j++)
		{
			// 기존 answer 배열을 tempArr에 복사
			tempArr[j] = answer[j];
		}
		free(answer); // answer 배열 해제

		for (int j = temp; j < size; j++)
		{
			// arr[i]개수만큼 arr[i]를 answer에 복사
			tempArr[j] = arr[i];
		}

		answer = tempArr;
	}
	return answer;
}