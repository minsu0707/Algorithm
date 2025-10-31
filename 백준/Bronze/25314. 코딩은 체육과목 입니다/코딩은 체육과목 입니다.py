num = int(input())
n = num // 4
answer_log = ["int"]

for i in range(n):
    answer_log.insert(0, "long")
print(" ".join(answer_log))