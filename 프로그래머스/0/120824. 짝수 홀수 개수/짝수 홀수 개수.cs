using System;
using System.Linq;

public class Solution {
    public int[] solution(int[] num_list) {
            int evens = num_list.Count<int>(x => x % 2 == 0);
            int odds = num_list.Count<int>(x => x % 2 != 0);
            int[] answer = new int[] { evens, odds };
            return answer;
    }
}