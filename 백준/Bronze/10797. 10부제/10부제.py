date_digit = int(input())
car_digits = list(map(int, input().split()))

violation_count = sum(1 for car_digit in car_digits if car_digit == date_digit)

print(violation_count)