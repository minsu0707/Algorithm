const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

// 첫 번째 줄: 세븐25의 가격 정보
let [X, Y] = input[0].split(" ").map(Number);
let minPrice = (X / Y) * 1000; // 세븐25의 1000그램 가격

// 두 번째 줄: 다른 편의점 개수
let N = Number(input[1]);

// 나머지 N개의 줄: 다른 편의점들의 가격 정보
for (let i = 2; i < 2 + N; i++) {
    let [Xi, Yi] = input[i].split(" ").map(Number);
    let price = (Xi / Yi) * 1000; // 현재 편의점의 1000그램 가격
    minPrice = Math.min(minPrice, price); // 최저 가격 갱신
}

// 출력: 최저 가격을 소수점 둘째 자리까지 출력
console.log(minPrice.toFixed(2));
