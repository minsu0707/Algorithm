import sys
all_student = list(range(1, 31))

for i in range(28):
    student = int(input())
    all_student.remove(student)

print(min(all_student))
print(max(all_student))