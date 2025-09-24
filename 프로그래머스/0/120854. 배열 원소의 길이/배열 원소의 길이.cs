using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string[] strlist) {
    List<int> lenList = new List<int>();
            for (int i = 0; i < strlist.Length; i++)
            {
                lenList.Add(strlist[i].Length);
            }
            int[] answer = lenList.ToArray();
            return answer;
    }
}