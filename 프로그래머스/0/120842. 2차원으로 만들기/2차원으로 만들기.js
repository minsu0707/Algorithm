function solution(num_list, n) {
    let groupArray = [];
    for(let i=0; i<num_list.length; i +=n) {
        groupArray.push(num_list.slice(i, i+n));
    }
    return groupArray;
}