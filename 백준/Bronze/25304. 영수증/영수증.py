total_price = int(input())
n = int(input())
total = 0

for i in range(n):
    price, number = map(int, input().split())
    total += price * number
print("Yes" if total_price == total else "No")