function solution(array) {
    let MaxNum = 0;
    let MaxIndex = 0;
    for(let i=0; i < array.length; i++) {
        if(array[i] > MaxNum) {
            MaxNum = array[i];
            MaxIndex = i;
        }
    }
    return [MaxNum, MaxIndex]
}