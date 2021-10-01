// https://leetcode.com/problems/integer-to-roman/

class Solution {
public:
    string intToRoman(int num) {
        vector<string> sym = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        vector<int> numbers = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string ans="";
        int length=12;
        while(num>0) {
            int div=num/numbers[length];
            num = num%numbers[length];
            while(div--) 
                ans.append(sym[length]);
            length--;
        }
        return ans;
    }
};