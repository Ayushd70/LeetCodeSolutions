class Solution {
public:
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
        v1.insert(v1.end(),v2.begin(),v2.end());
        sort(v1.begin(),v1.end());
        int n = v1.size()-1;
        if(n%2!=0) {
            return (v1[n/2]+v1[(n/2)+1])/2.0;
        }
        else{
            return v1[n/2];
        }
    return 0;
    }
};
