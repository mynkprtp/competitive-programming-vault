import java.util.Arrays;
import java.util.Scanner;

public class RemovingDigits {
    private static int mx = 1000000007;
    private static int solve(int n){
        int[] dp = new int[n+1];
        Arrays.fill(dp,mx);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            String s = String.valueOf(i);
            for(char ch:s.toCharArray()){
                int digit = ch-'0';
                if(digit!=0){
                    dp[i] = Math.min(dp[i],dp[i-digit]+1);
                }
            }
        }
        return dp[n];
        // if(n==0)
        //     return 0;
        // int temp = n;
        // int ans = Integer.MAX_VALUE; 
        // while(temp>0){
        //     if(temp%10>0 && n-temp%10>=0)
        //     ans = Math.min(ans,1+solve(n-temp%10));
        //     temp/=10;
        // }
        // return ans;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(solve(n));
        sc.close();
    }
}