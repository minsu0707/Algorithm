import sys
N, M = map(int, sys.stdin.readline().split())
basket_arr = [0] * N

for _ in range(M):
    i, j, k = map(int, sys.stdin.readline().split())
    for num in range(i-1, j):
        basket_arr[num] = k

print(" ".join(map(str, basket_arr)))