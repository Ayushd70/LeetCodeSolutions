class Solution {
public:
   bool valid(int a,int b,int n,int m){

        return (a>=0&&a<n && b>=0&&b<m);
    }

    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& used,int a,int b,int n,int m){

        used[a][b] = true;

        int d[4][2] = {{-1,0},{0,-1},{0,1},{1,0}};

        for(int i=0;i<4;i++){
            int newa = a+d[i][0];
            int newb = b+d[i][1];

            if(valid(newa,newb,n,m) && !used[newa][newb] && grid[newa][newb]=='1')
                dfs(grid,used,newa,newb,n,m);
        }

        return;
    }

    int numIslands(vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> used(n,vector<bool>(m,false));

        int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !used[i][j]){
                    k++;
                    dfs(grid,used,i,j,n,m);
                }
            }
        }
        return k;
    }
};