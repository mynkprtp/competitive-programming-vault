import java.util.*;
import java.io.*;

public class DiceCombinations
{
    static class FastReader {
      
        // BufferedReader to read input
        BufferedReader b;
      
        // StringTokenizer to tokenize input
        StringTokenizer s; 

        // Constructor to initialize BufferedReader
        public FastReader() {
            b = new BufferedReader
              (new InputStreamReader(System.in));
        }

        // Method to read the next token as a string
        String next() {
            while (s == null || !s.hasMoreElements()) {
                try {
                    s = new StringTokenizer(b.readLine());
                } catch (IOException e) {
                    e.printStackTrace(); 
                }
            }
            return s.nextToken();
        }

        // Method to read the next token as an integer
        int nextInt() { 
            return Integer.parseInt(next()); 
        }

        // Method to read the next token as a long
        long nextLong() { 
            return Long.parseLong(next()); 
        }

        // Method to read the next token as a double
        double nextDouble() { 
            return Double.parseDouble(next()); 
        }

        // Method to read the next line as a string
        String nextLine() {
            String str = "";
            try {
                if (s.hasMoreTokens()) {
                    str = s.nextToken("\n");
                } else {
                    str = b.readLine();
                }
            } catch (IOException e) {
                e.printStackTrace(); 
            }
            return str;
        }
    }
    private final static int mod = 1000000007;
    private static int findTotalWays(int n, int[] dp){
        dp[0]=1;
        for(int i=1;i<=n;i++){
            long ans=0;
            for(int j=1;j<=6;j++){
                if(i-j>=0)
                    ans+=dp[i-j]%mod;
                else    
                    break;
            }
            dp[i]=(int)(ans%mod);
        }
        return dp[n];
    }
	public static void main (String[] args) throws java.lang.Exception
	{
        FastReader s = new FastReader();
        
        int t = 1;
        // t=s.nextInt();

        while (t-- > 0) {
            int n = s.nextInt();
            int[] dp = new int[n+1];
            Arrays.fill(dp,-1);
            System.out.println(findTotalWays(n,dp));
        }
        
	}
}
