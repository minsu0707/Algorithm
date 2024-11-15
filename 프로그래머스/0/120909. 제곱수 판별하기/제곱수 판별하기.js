function solution(n) {
    let result_num = Math.sqrt(n)
    let result;
    Number.isInteger(result_num) ? result = 1 : result = 2
    return result
}