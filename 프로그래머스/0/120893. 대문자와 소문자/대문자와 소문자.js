function solution(my_string) {
    return swapCase(my_string)
}

function swapCase(str) {
    return str.split("").map(char=>char===char.toUpperCase()?char.toLowerCase():char.toUpperCase()).join("")
}