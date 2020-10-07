class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>s;
        int r = sqrt(area);  
        while (area % r != 0) 
                --r;
        s.push_back(area/r);
        s.push_back(r);
        return s;
    }
};
