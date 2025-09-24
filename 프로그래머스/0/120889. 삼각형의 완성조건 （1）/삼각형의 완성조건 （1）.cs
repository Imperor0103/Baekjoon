using System;
using System.Linq;

public class Solution {
    public int solution(int[] sides) {
            sides = sides.OrderByDescending(x => x).ToArray();
            int answer = sides[0] < sides[1] + sides[2] ? 1 : 2;
            return answer;
    }
}