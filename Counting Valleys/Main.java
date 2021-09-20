import java.util.Scanner;

public class Main {
    public static int countingValleys(int steps, String path) {
        int level = 0; 
        int count = 0;

        for(int i = 0; i < path.length(); ++i) {
            if(path.charAt(i) == 'U') ++level;
            if(path.charAt(i) == 'D') --level;

            if(path.charAt(i) == 'U' && level == 0)
                ++count;
        }

        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int n = sc.nextInt();
        sc.nextLine();           // Read \n that nextInt() didn't read.
        String path = sc.nextLine();

        System.out.println(countingValleys(n, path));

        sc.close();
    }
}
