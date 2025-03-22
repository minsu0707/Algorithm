const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const num1 = Number(input[0]);
const num2 = Number(input[1]);
const num3 = Number(input[2]);

console.log(num1 + num2 - num3);
console.log(String(num1) + String(num2) - String(num3));
