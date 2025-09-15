import java.util.Scanner;

public class Coin_Co {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // Number of coins
        int x = sc.nextInt(); // Target sum
        int[] coins = new int[n];
        for (int i = 0; i < n; i++) {
            coins[i] = sc.nextInt();
        }

        long[] dp = new long[x + 1];
        long MOD = 1_000_000_007; // Modulo value

        dp[0] = 1; // One way to make sum 0 (take no coins)

        for (int i = 1; i <= x; i++) { // Iterate through all possible sums
            for (int coin : coins) { // Iterate through all available coins
                if (i - coin >= 0) {
                    dp[i] = (dp[i] + dp[i - coin]) % MOD;
                }
            }
        }

        System.out.println(dp[x]);
        sc.close();
    }
}