import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class Main {
    public static int sockMerchant(int n, List<Integer> ar) {
        int counter = 0, totalSock = 0;

        for(int i = 0; i < n; ++i) {
            counter = 1;
            
            if(ar.get(i) != 0) {
                for(int j = i + 1; j < n; ++j) {
                    if(ar.get(i) == ar.get(j)) {
                        ++counter;
                        ar.set(j, 0);
                    }
                }                
            }

            totalSock += counter / 2;
        }

        return totalSock;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        List<Integer> arr = new ArrayList<Integer>();

        for(int i = 0; i < n; ++i) {
            arr.add(scan.nextInt());
        }

        System.out.println(sockMerchant(n, arr));
        scan.close();
    }
}
