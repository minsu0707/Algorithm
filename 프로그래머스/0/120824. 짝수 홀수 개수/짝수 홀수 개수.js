function solution(num_list) {
    let even_number = num_list.filter((num) => !(num%2))
    let odd_number = num_list.filter((num) => num%2)
    return [even_number.length, odd_number.length]
}