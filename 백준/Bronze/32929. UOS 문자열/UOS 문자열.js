const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let x = Number(input[0]);

if (x % 3 === 1) console.log("U");
else if (x % 3 === 2) console.log("O");
else console.log("S");