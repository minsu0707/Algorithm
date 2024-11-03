function solution(array) {
    const map = new Map();
    array.forEach((num) => {
        if(map.has(num)) map.set(num, map.get(num) + 1);
        else map.set(num, 1);
    })
    let max = Math.max(...map.values());
    let count = 0, result = 0;
    for(const [key, value] of map) {
        if(max === value) {
            count++;
            result = key;
        }
    }
    
    if(count > 1) return -1;
    else return result
}