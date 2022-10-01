class Solution {
    public long numberOfPairs(int[] nums1, int[] nums2, int diff) {
        // nums1[i] - nums1[j] <= nums2[i] - nums2[j] + diff
        // nums2[j] - nums1[j] <= nums2[i] - nums1[i] + diff
        int n = nums1.length;
        int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;
        for (int i = n-1; i >= 0; --i) {
            int k = nums2[i] - nums1[i];
            if (min > k) min = k;
            if (max < k) max = k;
        }
        min = Math.min(min, min+diff);
        max = Math.max(max, max+diff);
        BIT bit = new BIT(max-min+1);
        long ans = 0;
        int shift = -min;
        for (int i = n-1; i >= 0; --i) {
            int k = nums2[i] - nums1[i];
            ans += bit.sum(k + diff + shift);
            bit.add(k + shift, 1);
        }
        return ans;
    }
}
class BIT {
    int[] bit;
    int n;
    public BIT(int n) {
        bit = new int[n+1];
        this.n = n;
    }
    int sum(int idx) {
        int ret = 0;
        for (++idx; idx > 0; idx -= idx & -idx)
            ret += bit[idx];
        return ret;
    }

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta) {
        for (++idx; idx < n; idx += idx & -idx)
            bit[idx] += delta;
    }
}
