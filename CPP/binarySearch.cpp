class Solution {
public:
    int search(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size() - 1;
        return 
            recursive(nums, s, e, target);
    }
    
    int recursive(vector<int>& nums, int s, int e, int target){
        if(s > e) 
            return -1;
        
        int mid = s + (e - s) / 2;
        
        if(nums[mid] == target) 
            return mid;
        
        if(target > nums[mid]) 
            return recursive(nums, mid + 1, e, target);
        else
            return recursive(nums, s, mid - 1, target);
    }
};