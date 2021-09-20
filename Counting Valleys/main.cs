using System;

public class CountingValleys {
    public static int counting_valleys(int n, string path) {
        int level = 0, valleys = 0;

        foreach(char step in path) {
            if(step == 'U') ++level;
            if(step == 'D') --level;

            if(step == 'U' && level == 0)
                ++valleys;
        }

        return valleys;
    }

    public static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        string path = Console.ReadLine();

        Console.WriteLine(counting_valleys(n, path));
    }
}
