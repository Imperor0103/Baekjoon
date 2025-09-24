using System;

public class Solution {
    public int solution(int[] numbers) {
            int answer = int.MinValue;
            for (int i = 0; i < numbers.Length; i++)
            {
                for (int j = i + 1; j < numbers.Length; j++)
                {
                    answer = answer > numbers[i] * numbers[j] ? answer : numbers[i] * numbers[j];
                }
            }
            return answer;
    }
}