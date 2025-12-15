import sys
from collections import Counter

word = sys.stdin.readline().strip().upper()
counter = Counter(word)
max_count = max(counter.values())
max_chars = [char for char, count in counter.items() if count == max_count]
if len(max_chars) > 1 or not counter:
    print("?")
else:
    print("".join(max_chars))