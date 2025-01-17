const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let numbers = [];
let max = -1;
let r = 0,
  col = 0;

for (let i = 0; i < 9; i++) {
  let num = input[i].split(" ").map(Number);
  numbers.push(num);
  for (let j = 0; j < 9; j++) {
    if (num[j] > max) {
      max = num[j];
      r = i + 1;
      col = j + 1;
    }
  }
}

console.log(max);
console.log(r, col);
