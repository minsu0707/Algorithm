function solution(num, k) {
    let arr_num = String(num).split("");
    let index = arr_num.indexOf(String(k));
    return index !== -1 ? index + 1 : -1;
}