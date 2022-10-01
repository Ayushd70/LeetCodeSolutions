class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stax;
        unordered_map<int, int> hax;
        int len = nums2.size() - 1;
        for (len; len >= 0; len--) {
            int cur = nums2[len];
            while (!stax.empty() && stax.top() < cur) stax.pop();
            hax[cur] = stax.empty() ? -1: stax.top();
            stax.push(cur);
        }
        vector<int> res;
        for (int i: nums1) {
            res.push_back(hax[i]);
        }
        return res;
    }
};
