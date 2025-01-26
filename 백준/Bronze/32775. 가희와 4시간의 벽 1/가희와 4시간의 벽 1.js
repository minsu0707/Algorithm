const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const S = parseInt(input[0]);
const F = parseInt(input[1]);

function transportationChoice(S, F) {
    if (S <= F) {
        return "high speed rail";
    } else {
        return "flight";
    }
}

console.log(transportationChoice(S, F));
