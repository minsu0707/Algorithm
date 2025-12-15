n = int(input())

for i in range(n-1):
    print(" " * (n-i-1), end="")
    print("*" * (i * 2 + 1))

print("*" * ((n-1)*2+1))

for i in range(n-1):
    print(" " * (i + 1), end="")
    print("*" * ((n-i)*2-3))