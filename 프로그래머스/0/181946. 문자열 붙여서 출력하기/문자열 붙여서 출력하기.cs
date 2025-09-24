using System;

public class Example
{
    public static void Main()
    {
        Console.Clear();
        string input = Console.ReadLine();
        string[] strs = input.Split(' ');

        string newStr = "";
        for (int i = 0; i < strs.Length; i++)
        {
            newStr += strs[i];
        }
        Console.WriteLine(newStr);
    }
}