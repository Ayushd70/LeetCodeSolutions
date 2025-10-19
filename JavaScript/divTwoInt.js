var divide = function (dividend, divisor) {
  const INT_MAX = 2 ** 31 - 1;
  const INT_MIN = -(2 ** 31);

  if (divisor === 0) return INT_MAX; // handle divide by zero
  if (dividend === 0) return 0;

  const sign = (dividend > 0) === (divisor > 0) ? 1 : -1;

  const quotient = Math.floor(Math.abs(dividend) / Math.abs(divisor));
  const result = sign * quotient;

  if (result > INT_MAX) return INT_MAX;
  if (result < INT_MIN) return INT_MIN;

  return result;
};
