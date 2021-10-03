import java.util.Scanner;
import java.util.Collections;
import java.util.ArrayList;
import java.util.List;

public class Main
{
    public static int jumpingOnClouds(List<Integer> clouds)
    {
        int jumps = 0;
        for(int i = 0; i < clouds.size() - 1; ++i)
        {
            // If you are in a cloud, always jump two clouds, you can jump
            // twice because you have the ++i from the if and ++i from the for.
            // If you are in a thunderhead, just jump 1.
            if(clouds.get(i) == 0) ++i;
            ++jumps;
        }
        return jumps;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> clouds = new ArrayList<Integer>();

        for(int i = 0; i < n; ++i)
            clouds.add(sc.nextInt());

        System.out.println(jumpingOnClouds(clouds));
        sc.close();
    }
}
