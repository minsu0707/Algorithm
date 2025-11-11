import sys

num_arr = []
N = int(sys.stdin.readline())
numbers = list(map(int, sys.stdin.readline().split()))[:N]

for i in range(N):
    bigNum = max(numbers)
    num_arr.append(numbers[i]/bigNum*100)
print(sum(num_arr)/N)