const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let T = Number(input[0]);

for (let i = 1; i <= T; i++) {
  let number = Number(input[i]);
  let binary = number.toString(2);
  let arr_binary = binary.split("").map((num) => Number(num));
  let result = [];
  arr_binary
    .reverse()
    .map((num, index) => (num === 1 ? result.push(index) : null));
  console.log(result.join(" "));
}