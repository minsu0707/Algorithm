// angle이 90도 미만은 1 출력
// angle이 90도 일 때 2 출력
// angle이 90 < angle < 180 일 때 3 출력
// anlge === 180도 이면 4출력

function solution(angle) {
    if(angle < 90) return 1
    else if(angle === 90) return 2
    else if(angle < 180) return 3
    else return 4
}