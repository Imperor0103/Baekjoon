using System;

public class Solution {
    public int[] solution(int[] numbers, string direction) {
            int[] answer = new int[numbers.Length];
            if (direction.Equals("right"))
            {
                for (int i = 0; i < numbers.Length; i++)
                {
                    answer[i] = numbers[(i - 1 + numbers.Length) % numbers.Length];
                }
            }
            else if (direction.Equals("left"))
            {
                for (int i = 0; i < numbers.Length; i++)
                {
                    answer[i] = numbers[(i + 1) % numbers.Length];
                }
            }
            return answer;
    }
}