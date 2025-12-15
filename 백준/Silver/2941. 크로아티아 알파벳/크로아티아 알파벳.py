word = input().strip()
croatia_words = ["c=","c-","dz=","d-","lj","nj","s=","z="]

croatia_words.sort(key=len, reverse=True)

for char in croatia_words:
    word = word.replace(char, "*")

print(len(word))