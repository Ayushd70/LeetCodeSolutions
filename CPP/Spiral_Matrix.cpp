// https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int lu=0,ll=0,ld=matrix.size()-1;
        int lr=matrix.empty()?0:matrix[0].size()-1;
        int sz=matrix.empty()?0:matrix.size()*matrix[0].size();
        vector<int>res;
        while(res.size()<sz){
            for(int i=ll;i<=lr;i++)
                res.push_back(matrix[lu][i]);
            ++lu;
            for(int i=lu;i<=ld;++i)
                res.push_back(matrix[i][lr]);
            --lr;
            for(int i=lr;i>=ll;--i)
                res.push_back(matrix[ld][i]);
            --ld;
            for(int i=ld;i>=lu;--i)
                res.push_back(matrix[i][ll]);
            ++ll;
        }
        if(res.size()>sz)        
            res.erase(res.begin()+sz, res.end());
        return res;
    }
};