def solution(strArr):
    answer = list(filter(lambda word : "ad" not in word, strArr))    
    return answer