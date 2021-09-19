#!/usr/bin/env python

def sockMerchant(n: int, ar: list) -> int:
    # Using a set will delete repeated elements.
    return sum([ar.count(element) // 2 for element in set(ar)])

def main():
    n = int(input())

    # Every element is a list of string, with map just convert each element into an integer
    # and everything will be convert it to a list.
    ar = list(map(int, input().rstrip().split()))

    print(f"{sockMerchant(n, ar)}")

if __name__ == '__main__':
    main()
