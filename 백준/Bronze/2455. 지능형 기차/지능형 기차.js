const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let max = 0;
let humuns = 0;

for (let i = 0; i < 4; i++) {
  let [leftI, rightI] = input[i].split(" ").map(Number);
  humuns += -leftI + rightI;
  if (humuns > max) max = humuns;
}

console.log(max);