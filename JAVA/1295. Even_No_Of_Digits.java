class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
        for(int i=0; i<nums.length; i++)
        {
            int no_of_digits = String.valueOf(nums[i]).length();
            if(no_of_digits % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
}
