class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> v;
        if(root==NULL){
            return v;
        }
        q.emplace(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> v1;
            for(int i=0;i<n;i++){
                TreeNode* cur=q.front();
                
                v1.push_back(cur->val);
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
                q.pop();
            }
            v.push_back(v1);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};