word = input()
alphabet = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q","r", "s", "t", "u", "v", "w", "x", "y", "z"]
result = []

for i in range(len(alphabet)):
    if alphabet[i] in word:
        result.append(word.index(alphabet[i]))
    else:
        result.append(-1)

print(" ".join(map(str, result)))