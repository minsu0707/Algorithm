words = input().strip()
count = 0

if words == "":
    print(0)
    exit()

for c in words:
    if c == " ":
        count += 1

print(count + 1)