class Solution {
public:
    int time=1;
    void dfs(int node,int parent,vector<int> &vis,vector<vector<int>> &adj,vector<int> &low,vector<int> &dfss,vector<vector<int>> &c,vector<vector<int>>&ans){
        vis[node] =1;
        dfss[node] = low[node] = time;
        time++;
        for(auto it: adj[node]){
            if(it==parent)continue;
            if(!vis[it]){
                dfs(it,node,vis,adj,low,dfss,c,ans);
                low[node] = min(low[node],low[it]);
                if(low[it]>dfss[node]){
                    ans.push_back({it,node});
                }
            }
            else{
                low[node] = min(low[node],low[it]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& c) {
        vector<vector<int>> adj(n);
        vector<int> vis(n,0);
        vector<int> dfss(n,0);
        vector<int> low(n,0);
        vector<vector<int>> ans;
        for(auto it: c){
            int u =it[0];
            int v = it[1];
            adj[v].push_back(u);
            adj[u].push_back(v);
        }
        dfs(0,-1,vis,adj,low,dfss,c,ans);
        return ans;
    }
};
