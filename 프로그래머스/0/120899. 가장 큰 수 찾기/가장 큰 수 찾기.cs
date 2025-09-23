using System;

public class Solution {
    public int[] solution(int[] array) {
            int max = int.MinValue;
            int idx = 0;
            for (int i = 0; i < array.Length; i++)
            {
                if (max < array[i])
                {
                    max = array[i];
                    idx = i;
                }
            }
            int[] answer = new int[] { max, idx };
            return answer;
    }
}