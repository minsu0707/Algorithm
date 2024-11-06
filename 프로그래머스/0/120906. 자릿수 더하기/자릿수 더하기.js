function solution(n) {
    let numbers = String(n);
    let changeArr = numbers.split("");
    let result = changeArr.map(Number);
    let tmp = 0;
    result.map((num) => tmp += num);
    
    return tmp
}