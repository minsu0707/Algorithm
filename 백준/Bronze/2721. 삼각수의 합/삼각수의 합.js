const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");
const T = parseInt(input[0]);

function triangularNumber(n) {
    return (n * (n + 1)) / 2;
}

function weightedTriangularSum(n) {
    let sum = 0;
    for (let k = 1; k <= n; k++) {
        sum += k * triangularNumber(k + 1);
    }
    return sum;
}

for (let i = 1; i <= T; i++) {
    const n = parseInt(input[i]);
    console.log(weightedTriangularSum(n));
}
