public class solution {
    public int minZeroArray(int[] nums, int[][] queries) {
        int n = nums.length;
        int sum = 0;
        int querryCount = 0;
        int[] diffArray = new int[n + 1];

        for (int i = 0; i < n; ++i) {
            while (sum + diffArray[i] < nums[i]) {
                querryCount++;
                if (querryCount > queries.length) {
                    return -1;
                }

                int l = queries[querryCount - 1][0];
                int r = queries[querryCount - 1][1];
                int x = queries[querryCount - 1][2];

                if (r >= i) {
                    diffArray[Math.max(l, i)] += x;
                    if (r + 1 < diffArray.length) {
                        diffArray[r + 1] -= x;
                    }
                }
            }
            sum += diffArray[i];
        }
        return querryCount;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = { 1, 2, 3, 4, 5 };
        int[][] queries = { { 1, 3, 2 }, { 2, 4, 3 }, { 0, 4, 1 } };
        System.out.println(s.minZeroArray(nums, queries));
    }
}