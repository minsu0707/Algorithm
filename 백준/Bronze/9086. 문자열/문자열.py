import sys

T = int(sys.stdin.readline())
for _ in range(T):
    word = sys.stdin.readline().strip()
    print(word[0] + word[-1])