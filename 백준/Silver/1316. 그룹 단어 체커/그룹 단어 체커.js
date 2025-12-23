const fs = require("fs")
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n")

function isGroupWord(word) {
    const seen = new Set();
    let prevChar = "";

    for(const char of word) {
        if(char !== prevChar && seen.has(char)){
            return false;
        }
        seen.add(char);
        prevChar = char;
    }

    return true
}

const n = Number(input[0]);
let words = input.slice(1);
let count = 0;

for(const word of words) {
    if(isGroupWord(word)) count += 1;
}

console.log(count);