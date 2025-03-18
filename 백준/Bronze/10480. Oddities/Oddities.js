const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const n = Number(input[0]);

for (let i = 1; i <= n; i++) {
  let num = Number(input[i]);
  if (num % 2) console.log(`${num} is odd`);
  else console.log(`${num} is even`);
}