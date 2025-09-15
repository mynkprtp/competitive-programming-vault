// import java.util.Scanner;

// class DiceCombinations{
//     static final int mod=1000000007;
//     public static void main(String[] args) {
//         Scanner Sc = new Scanner(System.in);
//         int n=Sc.nextInt();
//         int[] dp = new int[(n+1)];
//         dp[0]=1;
//         for(int i=1;i<=n;i++){
//             long ans=0;
//             for(int j=1;j<=6;j++){
//                 if(i-j>=0)
//                     ans+=dp[i-j]%mod;
//                 else
//                     break;
//             }
//             dp[i]=(int)(ans%mod);
//         }
//         System.out.println(dp[n]);
//     }
// };