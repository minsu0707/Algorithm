nums = input().split()
print(max(int(num[::-1]) for num in nums))