class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
        {
            return"";
        }
        string ans="";
        for(int i=0; i<strs[0].size(); i++)
        { bool s=true;
            for(int j=1; j<strs.size(); j++)
            {
                if(strs[0][i]!=strs[j][i])
                {
                    s=false;
                }
            }
         if(s==true)
         {
             ans+=strs[0][i];
         }
         else{
             return ans;
         }
        } return ans;
    }
};
