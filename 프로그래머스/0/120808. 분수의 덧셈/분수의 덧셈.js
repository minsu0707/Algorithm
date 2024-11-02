function solution(numer1, denom1, numer2, denom2) {
    let onNumber = numer1 * denom2 + numer2 * denom1
    let underNumber = denom1*  denom2   
    
    let max = 1;
    for(let i=2; i<=Math.min(onNumber, underNumber); i++) {
        if(onNumber % i === 0 && underNumber % i === 0) max = i;
    }
    return [onNumber / max, underNumber / max]
}