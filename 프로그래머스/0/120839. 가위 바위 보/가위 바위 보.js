// 가위: 2
// 바위: 0
// 보: 5
// 1. 가위, 바위
// 2. 바위, 보
// 3. 보, 가위

function solution(rsp) {
    let arr = rsp.split("");
    let result = [];
    for(let i=0; i<arr.length; i++) {
        if(arr[i] === "2") result[i] = "0";
        else if(arr[i] === "0") result[i] = "5";
        else if(arr[i] === "5") result[i] = "2";
    }
    return result.join("")
}