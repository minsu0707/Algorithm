import sys

n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))[:n]
count_num = int(sys.stdin.readline())
print(arr.count(count_num))