const fs = require("fs")
const input = fs.readFileSync("/dev/stdin").toString().trim().split(" ")

let [N, M, K] = input.map(Number);
let team = 0;

while(true){
    N -= 2;
    M -= 1;
    if(N<0 || M<0 || (N+M)<K) {
        break;
    }
    team += 1;
}

console.log(team)