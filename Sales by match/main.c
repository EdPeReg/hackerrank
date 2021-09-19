#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int count(int element, int n, int *ar) {
    int counter = 0;

    for(int i = 0; i < n; ++i) {
        if(element == ar[i])
            ++counter;
    }

    return counter;
}

int sockMerchant(int n, int* ar) {
    int *repeatedElem = (int*) malloc(n * sizeof(int));
    int numberPairs = 0;

    for(int i = 0; i < n; ++i) {
        repeatedElem[i] = -1;
    }

    bool repeated = false;
    for(int i = 0; i < n; ++i) {
        // Start to analize the repeated elements.
        for(int j = 0; j < n; ++j) {
            // If it's repeated, stop and set the flag as repeated. Otherwise continue.
            if(ar[i] != repeatedElem[j]) {
                repeated = false;
                continue;
            } else {
                repeated = true;
                break;
            }
        }

        // If it's not repeated just do the calculation and insert the repeated element.
        if(!repeated) {
            repeatedElem[i] = ar[i];
            int counter = count(ar[i], n, ar);
            numberPairs += counter / 2;
        }
    }

    free(repeatedElem);
    return numberPairs;
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
