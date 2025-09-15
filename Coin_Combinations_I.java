import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Coin_Combinations_I {
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
    private static long mod = 1000000007L;
    private static int solve(int[] a, int target){
        int n = a.length;
        long[] dp = new long[target+1];
        dp[0]=1;
        for(int i=1;i<=target;i++){
            for(int j=0;j<n;j++){
                if(a[j]<=i)
                    dp[i]+=dp[i-a[j]];
            }
            dp[i]%=mod;
        }
        return (int)dp[target];
    }
	public static void main (String[] args) throws java.lang.Exception
	{
        FastReader s = new FastReader();

        int t = 1;
        // t=s.nextInt();

        while (t-- > 0) {
            int n = s.nextInt();
            int x = s.nextInt();
            int[] a = new int[n];
            for(int i=0;i<n;i++){
                a[i]=s.nextInt();
            }
            Arrays.sort(a);
            System.out.println(solve(a,x));
        }
        
	}
}