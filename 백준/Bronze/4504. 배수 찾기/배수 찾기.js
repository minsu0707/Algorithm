const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const n = Number(input[0]);

for (let i = 1; ; i++) {
  let num = 0;
  num = Number(input[i]);
  if (num === 0) break;
  else if (num % n) console.log(`${num} is NOT a multiple of ${n}.`);
  else console.log(`${num} is a multiple of ${n}.`);
}