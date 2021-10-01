class Solution {
public:
    map<int,set<pair<int,int>>> ans;
    void pre( TreeNode *root, int horizontal_Level, int vertical_Level ){
        if(!root)
            return ;
        ans[horizontal_Level].insert({vertical_Level,root->val});
        pre(root->left,horizontal_Level-1,vertical_Level+1);
        pre(root->right,horizontal_Level+1,vertical_Level+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        pre(root,0 , 0 );
        vector<vector<int>> v;
        for( auto e : ans ){
            vector<int> c;
            for( auto x : e.second )
                c.push_back(x.second);
            v.push_back(c);
        }
        return v;
    }
};