class Solution {
    public int reverse(int x) {
        int newValue = 0;
        while (x!=0) {
            int mod = x % 10;
            newValue = newValue*10 + mod;
            x /=10;
        }
        return newValue;
    }
}