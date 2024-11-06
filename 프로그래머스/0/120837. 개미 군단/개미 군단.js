// 장군개미 공격력: 5
// 병정개미 공격력: 3
// 일개미 공격력: 1

// 체력 23의 여치를 사냥하려고 할 때, 장군개미 네 마리와 병정개미 한 마리를 데려가면 더 적은 병력으로 사냥할 수 있음


function solution(hp) {
    let king = ~~(hp / 5);
    hp %= 5;
    
    let solider = ~~(hp / 3);
    hp %= 3;
    
    let ant = ~~(hp / 1);
    hp %= 1;
    
    return king + solider + ant
}