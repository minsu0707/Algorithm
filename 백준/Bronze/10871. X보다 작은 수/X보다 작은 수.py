import sys

[a, b] = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))

def calculateFnc(num):
    return True if num < b else False

result = filter(calculateFnc, arr)
print(" ".join(map(str, list(result))))