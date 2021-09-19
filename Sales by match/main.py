#!/usr/bin/env python

def sockMerchant(n: int, ar: list) -> int:
    i = 0
    numPairs = 0

    ar.sort()
    while i < n - 1:
        if ar[i] == ar[i+1]:
            numPairs += 1
            i += 2
        else:
            i += 1

    return numPairs

def main():
    n = int(input())

    # Every element is a list of string, with map just convert each element into an integer
    # and everything will be convert it to a list.
    ar = list(map(int, input().rstrip().split()))

    print(f"{sockMerchant(n, ar)}")

if __name__ == '__main__':
    main()
