import java.util.ArrayList;
import java.util.List;

public class solution {
    public int isPrime(int n) {
        if (n < 2)
            return 0;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }

    public int[] closestPrimes(int left, int right) {
        List<Integer> primes = new ArrayList<>();
        int[] res = new int[2];

        for (int i = left; i <= right; i++) {
            if (isPrime(i) == 1) {
                primes.add(i);
            }
        }

        if (primes.size() < 2) {
            res[0] = -1;
            res[1] = -1;
            return res;
        }

        int minDiff = Integer.MAX_VALUE;

        for (int i = 0; i < primes.size() - 1; ++i) {
            if (primes.get(i + 1) - primes.get(i) < minDiff) {
                minDiff = primes.get(i + 1) - primes.get(i);
                res[0] = primes.get(i);
                res[1] = primes.get(i + 1);
            }
        }

        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] result = s.closestPrimes(10, 20);
        System.out.println(result[0] + " " + result[1]);
    }
}
