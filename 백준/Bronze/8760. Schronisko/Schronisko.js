const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

const Z = parseInt(input[0]); // 테스트 케이스 개수

for (let i = 1; i <= Z; i++) {
    const [W, K] = input[i].split(" ").map(Number);
    console.log(Math.floor((W * K) / 2)); // 최대 수용 가능한 관광객 수 출력
}