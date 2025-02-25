const fs = require('fs');

// 입력값을 받아 처리
const input = fs.readFileSync('/dev/stdin', 'utf8').trim().split('\n');
const a = parseInt(input[0]);
const [w, v] = input[1].split(' ').map(Number);

// 어댑터의 암페어 계산
const adapterAmpere = w / v;

// 어댑터가 트리에 적합한지 판단
console.log(adapterAmpere >= a ? 1 : 0);
