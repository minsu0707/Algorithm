const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function ChangeKorean(N) {
  const START_NUICODE = 44032; // "가"

  const unicodeValue = START_NUICODE + (N - 1);

  const character = String.fromCharCode(unicodeValue);
  console.log(character);
}

const N = Number(input[0]);
ChangeKorean(N);
