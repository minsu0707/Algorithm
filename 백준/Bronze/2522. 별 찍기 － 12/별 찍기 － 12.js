const fs = require("fs");
const N = parseInt(fs.readFileSync("/dev/stdin").toString().trim());

// 위쪽 삼각형
for (let i = 1; i <= N; i++) {
    console.log(" ".repeat(N - i) + "*".repeat(i));
}

// 아래쪽 삼각형
for (let i = N - 1; i >= 1; i--) {
    console.log(" ".repeat(N - i) + "*".repeat(i));
}