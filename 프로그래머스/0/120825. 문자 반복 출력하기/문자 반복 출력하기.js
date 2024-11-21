function solution(my_string, n) {
    let result = [...my_string].map((item) => item.repeat(n)).join("")
    return result
}