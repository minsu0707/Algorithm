a, b, c = map(int, input().split())

if a + b > c and a + c > b and b + c > a:
    if a == b == c:
        print(2)
    elif a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2:
        print(1)
    else:
        print(0)
else:
    print(0)