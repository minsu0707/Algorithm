const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let [X, Y] = input[0].split(" ").map(Number);
let minPrice = (X / Y) * 1000;

let N = Number(input[1]);

for (let i = 2; i < 2 + N; i++) {
    let [Xi, Yi] = input[i].split(" ").map(Number);
    let price = (Xi / Yi) * 1000;
    minPrice = Math.min(minPrice, price);
}

console.log(minPrice.toFixed(2));
