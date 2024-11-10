function solution(my_string, letter) {
    let result = [...my_string].filter((char) => !(char===letter));
    return result.join("")
}