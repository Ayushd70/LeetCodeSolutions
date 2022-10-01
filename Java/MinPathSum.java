class Solution {
    public int minPathSum(int[][] grid) {

        int i = grid.length - 1;
        while (i >= 0) {
            for (int j = grid[0].length - 1; j >= 0; j--) {
                if (i == grid.length - 1 && j == grid[0].length - 1) {
                    grid[i][j] = grid[i][j];
                } else if (i == grid.length - 1) {
                    grid[i][j] += grid[i][j + 1];
                } else if (j == grid[0].length - 1) {
                    grid[i][j] += grid[i + 1][j];
                } else {
                    grid[i][j] += Math.min(grid[i][j + 1], grid[i + 1][j]);
                }
            }
            i--;
        }

        return grid[0][0];
    }
}
