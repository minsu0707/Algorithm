function solution(n) {
    let result = 0;
    for(let i = 1; i <= 6*n; i++) {
        if(6 * i % n === 0) {
            result += i;
            break;
        }
    }
    return result
}