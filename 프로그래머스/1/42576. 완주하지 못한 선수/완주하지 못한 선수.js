 function solution(participant, completion) {
    let hash = {}
    for(let i of participant) {
        if(i in hash) {
            hash[i] += 1
        } else {
            hash[i] = 1
        }
    }
    for(let i of completion) {
        if(hash[i] == 1) {
            delete hash[i]
        } else {
            hash[i] -= 1
        }
    }
    
    return Object.keys(hash)[0]
}