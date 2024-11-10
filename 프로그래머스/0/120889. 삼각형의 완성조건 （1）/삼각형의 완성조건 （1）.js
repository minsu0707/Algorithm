function solution(sides) {
    sides.sort((a,b) => a - b);
    console.log(sides);
    if(sides.length === 3) {
        if(sides[0] + sides[1] > sides[2]) return 1;
        else return 2;
    } else {
        return 2;
    }
}