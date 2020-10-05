void dfs(vector<vector<int>> &result,vector<int> &res,vector<int> num,vector<bool> &used,int n){
    
        if(n==0){
            result.push_back(res);
            return;
        }
        for(int i=0;i<num.size();i++){
            if(used[i]==false){
                used[i]=true;
                res.push_back(num[i]);
                dfs(result,res,num,used,n-1);
                res.pop_back();
                used[i]=false;
            }
        }
    }

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()<=0) return vector<vector<int>>();
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        vector<int>res;
        vector<bool> used(nums.size(),false);
        dfs(result,res,nums,used,nums.size());
        return result;
    }
};
