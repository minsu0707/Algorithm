function solution(n) {
    let arr = Array(n);
    let sum = arr.fill().map((_, index) => index + 1).filter((value) => value % 2 === 0).reduce((acc, cur) => acc + cur, 0)
    return sum
}