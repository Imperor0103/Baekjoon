using System;

public class Example
{
    public static void Main()
    {
        Console.Clear();
        string input = Console.ReadLine();
        string[] nums = input.Split(' ');
        int a = int.Parse(nums[0]);
        int b = int.Parse(nums[1]);

        Console.WriteLine($"a = {a}");
        Console.WriteLine($"b = {b}");
    }
}