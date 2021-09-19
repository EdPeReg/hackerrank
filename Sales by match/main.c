#include <stdio.h>
#include <stdlib.h>

int sockMerchant(int n, int* ar) {
    int totalPairs = 0, sockCounter = 0;

    for(int i = 0; i < n; ++i) {
        // We always have at least one sock.
        sockCounter = 1;
        // Only analize socks that aren't repeated.
        if(ar[i] != 0) {
            // Count hom many socks you have and set it to 0 to mark that is already found.
            for(int j = i + 1; j < n; ++j) {
                if(ar[j] == ar[i]) {
                    ++sockCounter;
                    ar[j] = 0;
                }
            }
        }
        totalPairs += sockCounter / 2;
    }

    return totalPairs;
}

int main() {
    int n;
    scanf("%d", &n);
    int *ar = (int*) malloc(n * sizeof(int));

    for(int i = 0; i < n; ++i) {
        scanf("%d", &ar[i]);
    }

    printf("%d ", sockMerchant(n, ar));

    free(ar);
}

