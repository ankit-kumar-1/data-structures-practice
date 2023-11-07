function countSum(first, last) {
    var sum = 0;
    for (var i = first; i <= last; i++) {
        sum = sum + i;
    }
    return sum;
}
let ans = countSum(1, 10);
console.log(ans)