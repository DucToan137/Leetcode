
public class solution {
    public int[][] largestLocal(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        int[][] ans = new int[m - 2][n - 2];

        for (int i = 0; i < ans.length; i++) {
            for (int j = 0; j < ans[0].length; j++) {
                int largest = Integer.MIN_VALUE;
                for (int r = i; r < i + 3; r++) {
                    for (int c = j; c < j + 3; c++) {
                        largest = Math.max(largest, grid[r][c]);
                    }
                }
                ans[i][j] = largest;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int[][] grid = {
                { 9, 9, 8, 1 },
                { 5, 6, 2, 6 },
                { 8, 2, 6, 4 },
                { 6, 2, 2, 2 }
        };
        int[][] res = sol.largestLocal(grid);
        for (int i = 0; i < res.length; ++i) {
            for (int j = 0; j < res[0].length; ++j) {
                System.out.print(res[i][j] + " ");
            }
            System.out.println();
        }
    }
}
