function solution(n) {
    let arr = [];
    for(let i=1; i<=n; i++) {
        arr[i-1] = i
    }
    return arr.filter((item) => item%2!==0)
}