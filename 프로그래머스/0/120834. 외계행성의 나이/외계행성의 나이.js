function solution(age) {
    let str = "abcdefghij";
    return Array.from(age.toString()).map((item) => str[+item]).join("")
}