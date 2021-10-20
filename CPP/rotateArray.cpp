/*                                                  189. Rotate Array                                           */
/*                                        https://leetcode.com/problems/rotate-array/                          */


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        int d=n-k;
        for(int i=0;i<d/2;i++)swap(nums[i],nums[d-i-1]);
        for(int i=0;i<(k/2);i++)swap(nums[i+d],nums[n-i-1]);
        for(int i=0;i<n/2;i++)swap(nums[i],nums[n-i-1]);
    }
};
