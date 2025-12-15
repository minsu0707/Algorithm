dial_arr = ["ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"]
dial_input = input().strip()

time = 0
for dial_element in dial_arr:
    for char in dial_element:
        for x in dial_input:
            if x == char:
                time += dial_arr.index(dial_element) + 3
print(time)