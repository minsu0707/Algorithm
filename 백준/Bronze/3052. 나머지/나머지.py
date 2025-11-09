import sys

nums = [int(sys.stdin.readline().strip()) for _ in range(10)]

for i in range(len(nums)):
    nums[i] %= 42

print(len(set(nums)))