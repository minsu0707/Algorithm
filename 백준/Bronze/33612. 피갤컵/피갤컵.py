def calculate_date(n):
	start_year = 2024
	start_month = 8

	months = (n - 1) * 7

	year = start_year + (start_month + months - 1) // 12
	month = (start_month + months - 1) % 12 + 1

	return year, month

N = int(input().strip())

year, month = calculate_date(N)
print(year, month)