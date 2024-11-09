function solution(numbers) {
    let sortedNums = numbers.sort((a,b) => a-b)
    let BigNum1 = sortedNums[sortedNums.length - 1]
    let BigNum2 = sortedNums[sortedNums.length - 2]
    return BigNum1 * BigNum2
}