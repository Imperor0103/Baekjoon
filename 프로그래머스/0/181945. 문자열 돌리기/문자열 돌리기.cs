using System;
using System.Linq;

public class Example
{
    public static void Main()
    {
            String s;
            Console.Clear();
            s = Console.ReadLine();
            // 하나씩 쪼개서 출력한다
            char[] charArray = s.ToArray();
            for (int i = 0; i < charArray.Length; i++)
            {
                Console.WriteLine(charArray[i]);
            }
    }
}