import java.util.Scanner;

public class GridPathsI {
    private static int mod = 1000000007;
    private static int solve(char[][]arr){
        int n = arr.length;
        long[][] dp = new long[n][n];
        dp[0][0]=arr[0][0]=='.'?1:0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0 || arr[i][j]=='*')
                    continue;
                long val = 0;
                if(i-1>=0 && arr[i-1][j]=='.'){
                    val+=dp[i-1][j];
                }
                if(j-1>=0 && arr[i][j-1]=='.'){
                    val+=dp[i][j-1];
                }
                dp[i][j] = val>=mod?val-mod:val;
            }
        }
        return (int)dp[n-1][n-1];
        // if(i==0 && j==0)
        //     return 1;
        // int ans=0;
        // if(i-1>=0 && arr[i-1][j]=='.'){
        //     ans+=solve(i-1,j,arr);
        // }
        // if(j-1>=0 && arr[i][j-1]=='.'){
        //     ans+=solve(i,j-1,arr);
        // }
        // return ans;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        char[][] arr = new char[n][n];
        for(int i=0;i<n;i++){
            String str = sc.next();
            arr[i] = str.toCharArray();
        }
        System.out.println(solve(arr));
    }    
}