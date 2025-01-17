const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let [A, B] = input[0].split(" ").map(Number);
let [C, D] = input[1].split(" ").map(Number);

function calculateMoves(apple1, orange1, apple2, orange2) {
  let totalApple = apple1 + apple2;
  let tatalOrange = orange1 + orange2;

  let move1 = apple1 + orange2;
  let move2 = apple2 + orange1;

  return Math.min(move1, move2);
}
console.log(calculateMoves(A, B, C, D));
