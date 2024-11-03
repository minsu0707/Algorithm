function solution(n) {
    let result = 0;
    for(let i=1; i <= n * 6; i++) {
        if(i * 6 % n === 0) {
            result = i;
            break;
        }
    }
    return result
}