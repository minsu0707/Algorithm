const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split(" ");

let year = Number(input[0]);
console.log(year-543);