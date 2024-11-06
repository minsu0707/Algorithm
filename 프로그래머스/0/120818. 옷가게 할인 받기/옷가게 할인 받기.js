function solution(price) {
    let realPrice = parseInt(price)
    if(realPrice >= 500000) realPrice *= 0.8;
    else if(realPrice >= 300000) realPrice *= 0.9;
    else if(realPrice >= 100000) realPrice *= 0.95;
    return Math.floor(realPrice)
}