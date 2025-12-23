const fs = require("fs")
const input = fs.readFileSync("/dev/stdin").toString().trim()

const word_arr = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]
word_arr.sort((a, b) => a.length - b.length).reverse()
let joinInput = input

for(let word of word_arr) {
    joinInput = joinInput.replaceAll(word, "*")
}

console.log(joinInput.length)