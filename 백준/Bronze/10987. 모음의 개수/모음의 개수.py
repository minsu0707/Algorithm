count = 0

def is_vowel(letter):
	vowel = ["a", "e", "i", "o", "u"]
	return letter in vowel

words = input()
words_list = list(words)

for letter in words_list:
	if is_vowel(letter):
		count += 1

print(count)