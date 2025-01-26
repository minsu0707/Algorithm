const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let A = Number(input[0]);
let maxPencils = Math.floor(A / 5);

console.log(maxPencils);