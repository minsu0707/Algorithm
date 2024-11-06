function solution(array, n) {
    let result = array.filter((num) => num === n)

    if (result.length > 0)return result.length;
    else return 0;
}