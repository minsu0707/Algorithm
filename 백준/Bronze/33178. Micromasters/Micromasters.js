const fs = require('fs');

const n = parseInt(fs.readFileSync('/dev/stdin', 'utf8').trim(), 10);

const freeCourses = Math.floor(n / 10);
console.log(freeCourses);