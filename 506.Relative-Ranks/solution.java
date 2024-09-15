import java.util.Arrays;

public class solution {
    public String[] findRelativeRanks(int[] score) {
        String[] result = new String[score.length];
        int[] sortedScore = Arrays.copyOf(score, score.length);

        Arrays.sort(sortedScore);

        for (int i = 0; i < score.length; i++) {
            int rank = score.length - Arrays.binarySearch(sortedScore, score[i]);
            if (rank == 1) {
                result[i] = "Gold Medal";
            } else if (rank == 2) {
                result[i] = "Silver Medal";
            } else if (rank == 3) {
                result[i] = "Bronze Medal";
            } else {

                result[i] = Integer.toString(rank);
            }

        }

        return result;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] score = { 5, 4, 3, 2, 1 };
        String[] result = s.findRelativeRanks(score);
        for (String r : result) {
            System.out.println(r);
        }
    }
}
