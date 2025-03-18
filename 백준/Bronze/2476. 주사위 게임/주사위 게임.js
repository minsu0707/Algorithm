const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let n = Number(input[0]);
let maxPrize = 0;

for (let i = 1; i <= n; i++) {
  const [num1, num2, num3] = input[i].split(" ").map(Number);
  let prize = 0;

  if (num1 === num2 && num2 === num3) {
    prize = 10000 + num1 * 1000;
  } else if (num1 === num2 || num1 === num3 || num2 === num3) {
    const same = num1 === num2 || num1 === num3 ? num1 : num2;
    prize = 1000 + same * 100;
  } else {
    prize = Math.max(num1, num2, num3) * 100;
  }
  maxPrize = Math.max(maxPrize, prize);
}
console.log(maxPrize);