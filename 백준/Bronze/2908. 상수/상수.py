nums = input().split()
bigger = 0

for i in range(len(nums)):
    reversed_num = int("".join(reversed(nums[i])))
    if bigger < reversed_num:
        bigger = reversed_num

print(bigger)