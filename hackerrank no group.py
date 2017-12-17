#!/bin/python3

import sys
fact=[]
fact.append(0)
def f():
    ans=1
    for i in range(1,1000000):
        ans*=i
        fact.append(ans)
def countArray(n, k, x):
    # Return the number of ways to fill in the array.
    print("pritam")

if __name__ == "__main__":
    f()
    n, k, x = input().strip().split(' ')
    n, k, x = [int(n), int(k), int(x)]
    answer = countArray(n, k, x)
    print(answer)
