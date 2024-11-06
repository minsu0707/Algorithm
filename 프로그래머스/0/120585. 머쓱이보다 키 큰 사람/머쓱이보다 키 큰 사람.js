function solution(array, height) {
    return array.filter((element) => element > height).length
}