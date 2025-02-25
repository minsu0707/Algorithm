const fs = require('fs');

const N = parseInt(fs.readFileSync('/dev/stdin', 'utf8').trim(), 10);

let totalPoints = 0;
for (let i = 0; i <= N; i++) {
    for (let j = i; j <= N; j++) {
        totalPoints += i + j;
    }
}

console.log(totalPoints);