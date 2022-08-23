class Solution {
public:
    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& visited){
        int dirX[] = {0, 0, 1, -1};
        int dirY[] = {1, -1, 0, 0};
        if( i < 0 || j < 0 || i >= visited.size() || j >= visited[0].size()) return;
        visited[i][j] = 1;
        for(int ind = 0; ind < 4; ind++){
            int row = i + dirX[ind], col = j + dirY[ind];
            if( row < 0 || col < 0 || row >= visited.size() || col >= visited[0].size()) continue;
            if(!visited[row][col] && grid[row][col] == '1'){
                dfs(row, col, grid, visited);
            }
        }
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int rowNum = grid.size(), colNum = grid[0].size(), numOfIsland = 0;
        vector<vector<int>> visited(rowNum, vector<int>(colNum, 0));
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    dfs(i, j, grid, visited);
                    numOfIsland++;
                }
            }
        }
        return numOfIsland;
    }
};
