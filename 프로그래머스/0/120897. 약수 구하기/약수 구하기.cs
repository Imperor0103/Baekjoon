using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int n) {
            // num의 약수를 모두 구해서 배열에 넣어야한다
            List<int> divisors = new List<int>();
            for (int i = 1; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    divisors.Add(i);
                    if (i != n / i)
                    {
                        divisors.Add(n / i);
                    }
                }
            }
            divisors.Sort();
            int[] answer = divisors.ToArray();
            return answer;
    }
}