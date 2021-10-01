class Solution {
    public boolean canPartitionKSubsets(int[] nums, int k) {
        int n = nums.length, sum = Arrays.stream(nums).reduce(0, Integer::sum);
        int subsetSum = sum/k;
        if (subsetSum*k != sum) return false;
        int[] subsets = new int[k];
        Arrays.fill(subsets, subsetSum);
        Arrays.sort(nums);
        return dfs(nums, n-1, subsets);
    }
    private boolean dfs(int[] a, int p, int[] s) {
        if (Arrays.stream(s).reduce(Integer::sum).getAsInt() == 0) return true;
        if (p < 0) return false;
        for (int i = 0; i < s.length; ++i) {
            if (s[i] >= a[p]){
                s[i] -= a[p];
                if (dfs(a, p-1, s)) return true;
                s[i] += a[p];
            }
        }
        return false;
    }
}
