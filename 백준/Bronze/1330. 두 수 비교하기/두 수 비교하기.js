const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split(" ");

let [num1, num2] = input.map(Number);
console.log(num1 == num2 ? "==" : num1 > num2 ? ">" : "<");