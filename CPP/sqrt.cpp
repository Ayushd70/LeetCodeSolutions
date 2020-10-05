class Solution {
public:
    int mySqrt(int x) 
    {
        int sqrt = x / 2;
        int temp = 0;
        
    while(sqrt != temp)
    {
     temp = sqrt;
     sqrt = ( x/temp + temp) / 2;
    }
        return sqrt;
    }
};
