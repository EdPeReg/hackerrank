using System;
using System.Collections.Generic;
using System.Linq;

class JumpingOnClouds
{
    public static int jumping_on_clouds(List<int> clouds, int n)
    {
        int jumps = 0;
        for(int i = 0; i < n-1; ++i)
        {
            // 1 + 2 checks array boundaries.
            // If you are in a cloud, always jump two clouds, you can jump
            // twice because you have the ++i from the if and ++i from the for.
            // If you are in a thunderhead, just jump 1.
            if(i + 2 < n && clouds[i] == 0) ++i;
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
