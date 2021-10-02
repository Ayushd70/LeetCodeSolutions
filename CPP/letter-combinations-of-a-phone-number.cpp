class Solution {
public:
    vector<string> helper(int temp,string map1[]){
        if(temp==0 || temp ==1){
            vector<string> base;
            base.push_back(""); 
            return base;
        }
        int smallNo = temp%10;
        string s = map1[smallNo];
        vector<string>smallOutput;
        int temp1 = temp/10;
        smallOutput = helper(temp1,map1);
 
        vector<string>output;
        for(int i=0;i<smallOutput.size();i++){
            for(int j=0;j<s.size();j++){
                output.push_back(smallOutput[i]+s[j]);
            }
        }
        return output; 
    }
    vector<string> letterCombinations(string digits) {
        int temp = 0;
        if(digits==""){
            vector<string>ans;
            return ans;
        }
        for (int i = 0; i < digits.length(); i++) {
            temp = temp * 10 + (digits[i] - '0');
        }
        string map1[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        return helper(temp,map1);
    }
};
