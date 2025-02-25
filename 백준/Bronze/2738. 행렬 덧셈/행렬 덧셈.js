const fs = require('fs');

const input = fs.readFileSync('/dev/stdin', 'utf8').trim().split('\n');

const [N, M] = input[0].split(' ').map(Number);

const A = input.slice(1, N + 1).map(row => row.split(' ').map(Number));
const B = input.slice(N + 1).map(row => row.split(' ').map(Number));

for (let i = 0; i < N; i++) {
    console.log(A[i].map((val, j) => val + B[i][j]).join(' '));
}