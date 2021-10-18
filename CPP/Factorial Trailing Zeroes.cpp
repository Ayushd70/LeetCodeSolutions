// 172. Factorial Trailing Zeroes

// Given an integer n, return the number of trailing zeroes in n!

class Solution {
public:
    int trailingZeroes(int n) {      
        int i=0;
        while(n>0)
        {
            i += n/5;
            n /=5;
        }
        return i;
    }
};
