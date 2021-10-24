import java.util.Scanner;

public class Main {
    public static long repeatedString(String s, long n) {
        long total = n / s.length() * s.chars().filter(ch -> ch == 'a').count();
        int remainder = (int) (n % s.length());
        String substr = s.substring(0, remainder);
        return total + substr.chars().filter(ch -> ch == 'a').count();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        long n = sc.nextLong();

        System.out.println(repeatedString(str,n));

        sc.close();
    }
}


