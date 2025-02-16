A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())

time = 0

if A < 0:
    time += -A * C
    A = 0
    time += D
if A < B:
    time += (B - A) * E

print(time)