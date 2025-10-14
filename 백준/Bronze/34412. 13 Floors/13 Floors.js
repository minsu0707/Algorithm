const fs = require("fs")
const input = fs.readFileSync("/dev/stdin").toString().trim().split(" ")

let floor = Number(input[0]);
console.log(floor < 13 ? floor : floor + 1);