class Solution {
    public int divide(int dividend, int divisor) {
        if(dividend == 1 << 31 && divisor == -1) return (1 << 31) - 1;
        int a = dividend > 0 ? dividend : -dividend, b = divisor > 0 ? divisor : -divisor;
        int res = 0, x = 0;
        while (a - b >= 0) { // a >= b is not same as this, same below
            x = 0;
            while(a - (b << x << 1) >= 0) x++;
            res += 1 << x;
            a -= b << x;
        }
        return dividend > 0 == divisor > 0 ? res : -res;
    }
}
