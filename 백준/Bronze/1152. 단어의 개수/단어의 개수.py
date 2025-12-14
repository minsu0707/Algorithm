words = input().strip()
if words == "":
    print(0)
    exit()
print(words.count(" ") + 1)