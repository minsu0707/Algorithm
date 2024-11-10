function solution(n) {
    let results = [];
    for(let i=1; i<=n; i++) {
       if(n%i===0) {
           results[i-1] = i;
       }
    }
    return results.filter((num) => !(num===undefined))
}