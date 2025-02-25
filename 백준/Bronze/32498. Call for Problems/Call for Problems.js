
const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf8').trim().split('\n').map(Number);

const n = input[0];
const difficulties = input.slice(1);

const excludedCount = difficulties.filter(d => d % 2 !== 0).length;

console.log(excludedCount);