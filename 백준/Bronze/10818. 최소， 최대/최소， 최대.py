import sys
n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))[:n]

print(min(arr), max(arr))