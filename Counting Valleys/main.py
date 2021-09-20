#!/usr/bin/env python

def counting_valleys(n: int, path: str) -> int:
    counting_vall = level = 0

    for step in path:
        # -1 Decrements.
        level += 1 if step == 'U' else -1

        # Remember True = 1, False = 0.
        counting_vall += step == 'U' and level == 0
    
    return counting_vall

def main():
    n = int(input())
    path = input()

    print(f"{counting_valleys(n, path)}")

if __name__ == '__main__':
    main()
