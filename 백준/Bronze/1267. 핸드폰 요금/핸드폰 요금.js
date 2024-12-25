const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");
const call = input[1].split(" ").map((time) => Number(time));
let y = 0, m = 0;

for(let i=0; i<call.length; i++) {
    y += call[i] % 30 === 0 ? (call[i] / 30 + 1) * 10 : Math.ceil(call[i]/30) * 10;
    m += call[i] % 60 === 0 ? (call[i] / 60 + 1) * 15 : Math.ceil(call[i]/60) * 15;
}

if(y === m) console.log("Y M " + y);
else if(y > m) console.log("M " + m);
else console.log("Y " + y);