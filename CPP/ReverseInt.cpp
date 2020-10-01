class Solution {
public:
    int reverse(int x) {
        int rev=0,tmp=0;
        while(x!=0)
        {
            tmp=x%10;
            x=x/10;
	       /*overflow check*/
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && tmp > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && tmp < -8)) return 0;
            rev=(rev*10)+tmp;
        }
        return rev;
    }
};
