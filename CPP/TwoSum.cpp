class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	vector <int> result;
        for(int i=0;i<nums.size();i++)
        {
           for(int j=i;j<nums.size();j++)
           {
               if(i==j)
                   continue;

               if((nums[i]+nums[j])==target)
               {
                   result.push_back(i);
                   result.push_back(j);
               }
           }
        }
        return result;
    }
};
