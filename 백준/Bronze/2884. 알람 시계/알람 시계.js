const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split(" ");

let [num1, num2] = input.map(Number);

let totalMinute = num1 * 60 + num2;
let result = totalMinute - 45;

if(result < 0) result += 24 * 60;

console.log(`${parseInt(result / 60)} ${parseInt(result % 60)}`);