const fs = require('fs');

// 입력값을 받아 처리
const input = fs.readFileSync('/dev/stdin', 'utf8').trim().split(' ').map(Number);
const [T1, T2] = input;

// 형진이가 문제를 풀어야 하는 최대 시간
const maxTime = Math.min(T1, T2);

// 결과 출력
console.log(maxTime);
