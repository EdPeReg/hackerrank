using System;
using System.Collections.Generic;
using System.Linq;

class JumpingOnClouds
{
    public static int jumping_on_clouds(List<int> clouds, int n)
    {
        int jumps = 0;
        for(int i = 0; i < n-1;)
        {
            // 1 + 2 checks array boundaries.
            if(i + 2 < n && clouds[i+2] == 1)
                ++i;
            else
                i += 2;
            ++jumps;
        }

        return jumps;
    }

    public static void Main(String[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());
        // Dunno what the hell is going here, I know it just get the numbers and store it in a list.
        List<int> clouds = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arTemp => Convert.ToInt32(arTemp)).ToList();
        Console.WriteLine(jumping_on_clouds(clouds, n));
    }
}
