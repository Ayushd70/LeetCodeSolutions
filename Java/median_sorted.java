public class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int sum = nums1.length + nums2.length;
        double result = 0;
        if(sum == 0){
            return result;
        }
        int leftIndex = sum%2 == 0? sum/2-1: sum/2;
        int rightIndex = sum%2 == 0? leftIndex+1: leftIndex;

        int[] nums;
        if(nums1.length == 0){
            nums = nums2;
        }else if(nums2.length == 0){
            nums = nums1;
        }else{
            nums = new int[sum];
            int index1 = 0,index2 = 0;
            int length = rightIndex+1;
            for(int i=0; i<length;i++){
                if(index1 == nums1.length){
                    nums[i] = nums2[index2];
                    index2 ++;

                }else if(index2 == nums2.length){
                    nums[i] = nums1[index1];
                    index1 ++;
                }else if(nums1[index1]>nums2[index2]){
                    nums[i] = nums2[index2];
                    index2 ++;
                }else{
                    nums[i] = nums1[index1];
                    index1 ++;
                }
            }
        }
        result = (nums[leftIndex] + nums[rightIndex])/2.0;
        return result;

    }



    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.findMedianSortedArrays(new int[]{},new int[]{3,4}));;
    }
}