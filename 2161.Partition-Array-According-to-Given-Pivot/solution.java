public class solution {
    public int[] pivotArray(int[] nums, int pivot) {
        int[] res = new int[nums.length];
        int idx = 0;

        for (int i : nums) {
            if (i < pivot) {
                res[idx++] = i;
            }
        }

        for (int i : nums) {
            if (i == pivot) {
                res[idx++] = i;
            }
        }

        for (int i : nums) {
            if (i > pivot) {
                res[idx++] = i;
            }
        }

        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = { 9, 12, 3, 5, 14, 10, 10 };
        int pivot = 10;
        int[] res = s.pivotArray(nums, pivot);
        for (int i : res) {
            System.out.print(i + " ");
        }
    }
}
