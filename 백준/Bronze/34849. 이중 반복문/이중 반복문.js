const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim();

if((Number(input) ** 2) <= 100000000) console.log("Accepted");
else console.log("Time limit exceeded");