import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

class MinimizingCoins{
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
    private static final int mx = 1000000007;
    private static long solve(int[] arr, int target){
        int n = arr.length;
        int[] dp = new int[target+1];
        Arrays.fill(dp,mx);
        Arrays.sort(arr);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            if(arr[i-1]>target) break;
            for(int j=arr[i-1];j<=target;j++){
                dp[j] = Math.min(dp[j],1+dp[j-arr[i-1]]);
            }
        }
        return dp[target];
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
            int ans = (int) solve(a,x);
            System.out.println(ans==mx?-1:ans);
        }
        
	}
}