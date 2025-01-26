const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let A = Number(input[0]);
let B = Number(input[1]);
let C = Number(input[2]);

if (A + B + C <= 21) {
    console.log(1);
} else {
    console.log(0);
}