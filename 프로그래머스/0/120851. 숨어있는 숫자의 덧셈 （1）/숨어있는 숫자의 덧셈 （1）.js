function solution(my_string) {
    const regex = /[^0-9]/g;
    let result = my_string.replace(regex, "");
    let result_arr = result.split("")
    let total = 0;
    result_arr.map((num) => total += Number(num));
    return total;
}