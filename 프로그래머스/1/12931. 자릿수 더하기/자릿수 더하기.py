def solution(n):
    answer = 0
    n_arr = list(str(n))
    answer = list(map(int, n_arr))

    return sum(answer)