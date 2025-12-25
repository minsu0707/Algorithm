const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const [N, M] = input[0].split(" ").map(Number);
const nums = input[1].split(" ").map(Number);
let sum = 0;
let maxSum = 0;

for(let i=0; i<N; i++) {
    for(let j=i+1;j<N; j++) {
        for(let l=j+1; l<N; l++){
            sum = nums[i] + nums[j] + nums[l];
            if(sum <= M && sum > maxSum) {
                maxSum = sum;
            }
        }
    }
}

console.log(maxSum);