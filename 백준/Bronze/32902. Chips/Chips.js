const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split(" ");

let minTime = Number(input[1]) + 1;
let maxTime = Number(input[0] * input[1] + 1)
console.log(minTime, maxTime)