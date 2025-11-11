import sys

N, M = map(int, sys.stdin.readline().split())
basket_arr = list(range(N+1))

for _ in range(M):
    i, j = map(int, sys.stdin.readline().split())
    basket_arr[i:j+1] = basket_arr[i:j+1][::-1]
print(" ".join(map(str, basket_arr[1:N+1])))