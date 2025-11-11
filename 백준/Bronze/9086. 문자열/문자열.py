import sys

T = int(sys.stdin.readline())
for _ in range(T):
    word = sys.stdin.readline().strip()
    word_arr = list(word)
    last_idx = len(word_arr)-1
    print(f'{word_arr[0]}{word_arr[last_idx]}')