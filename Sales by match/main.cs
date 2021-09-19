using System;
using System.Linq;
using System.Collections.Generic;

class SalesByMatch {
    public static int sockMerchant(int n, List<int> arr) {
        int counter = 0, total = 0;

        for(int i = 0; i < n; ++i) {
            counter = 1;
            if(arr[i] != 0) {
                for(int j = i + 1; j < n; ++j) {
                    if(arr[i] == arr[j]) {
                        ++counter;
                        arr[j] = 0;
                    }
                }
            }
            total += counter / 2;
        }

        return total;
    }

    public static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        
        // Dunno what the hell is going here, I know it just get the numbers and store it in a list.
        List<int> arr = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arTemp => Convert.ToInt32(arTemp)).ToList();
        
        Console.WriteLine(sockMerchant(n, arr));
    }
}

