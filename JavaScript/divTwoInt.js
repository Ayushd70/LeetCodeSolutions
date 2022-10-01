var divide = function (dividend, divisor) {
  let res = 0;
  let limit = 2147483648;
  let s = divisor > 0 ? 1 : -1;
  let s1 = dividend > 0 ? 1 : -1;

  let sum = Math.floor(Math.abs(dividend) / Math.abs(divisor));
  if (sum == limit) {
    res = sum * s * s1 < 0 ? -(2 ** 31) : 2 ** 31 - 1;
  } else {
    res = sum < limit ? sum * s * s1 : 2147483647;
  }

  return res;
};
