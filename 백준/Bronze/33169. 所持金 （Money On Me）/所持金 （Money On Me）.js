const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let num1 = Number(input[0]);
let num2 = Number(input[1]);
console.log(num1 * 1000 + num2 * 10000);