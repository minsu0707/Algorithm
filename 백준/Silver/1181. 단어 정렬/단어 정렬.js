const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const n = Number(input[0]);
let words = [];

for (let i = 1; i <= n; i++) {
  let word = input[i].toString().trim();
  words.push(word);
}

let uniqueWords = [...new Set(words)];
uniqueWords.sort((a, b) => {
  if (a.length === b.length) {
    return a < b ? -1 : a > b ? 1 : 0;
  }
  return a.length - b.length;
});

console.log(uniqueWords.join("\n"));