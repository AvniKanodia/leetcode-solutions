class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        auto bfs = [&](int row, int col) {
            vector<int> dr = {1, -1, 0, 0};
            vector<int> dc = {0, 0, 1, -1};
            queue<pair<int, int>> q;
            q.push(make_pair(row,col));
            visited[row][col] = true;
            while(!q.empty()) {
                auto [r,c] = q.front();
                q.pop();
                for (int d = 0; d < 4; ++d) {
                    int nr = r + dr[d];
                    int nc = c + dc[d];
                    if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == '1' && !visited[nr][nc]) {
                        q.push(make_pair(nr, nc));
                        visited[nr][nc] = true;
                    }
                }
            }
        };

        int num_islands = 0;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    num_islands++;
                    bfs(i, j);
                }
            }
        }
        return num_islands;
    }
};