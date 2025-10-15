class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<>> pq;
        vector<pair<int,int>> directions = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        set<pair<int,int>> seen;
        
        pq.push({grid[0][0], 0, 0});
        
        while (!pq.empty()) {
            auto [max_d, r, c] = pq.top();
            pq.pop();
            
            if (seen.count({r, c})) continue;
            seen.insert({r, c});
            
            if (r == m-1 && c == n-1) return max_d;
            
            for (auto [dr, dc] : directions) {
                int nr = r + dr, nc = c + dc;
                if (nr >= 0 && nr < m && nc >= 0 && nc < n && !seen.count({nr, nc})) {
                    int new_d = max(max_d, grid[nr][nc]);
                    pq.push({new_d, nr, nc});
                }
            }
        }
        return -1;
    }
};
