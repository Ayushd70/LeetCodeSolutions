class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int l[n];
        stack<int> s;
        for(int i=0;i<n;i++) {
            while(s.size() and heights[s.top()] >= heights[i]) s.pop();
            if(s.size()) l[i]=s.top();
            else l[i]=-1;
            s.push(i);
        }
        int ans = 0;
        while(s.size()) s.pop();
        for(int i=n-1;i>=0;i--) {
            while(s.size() and heights[s.top()] >= heights[i]) s.pop();
            int r;
            if(s.size()) r = s.top();
            else r = n;
            s.push(i);
            ans = max(ans, (r-l[i]-1)*heights[i]);
        }
        return ans;
    }
};
