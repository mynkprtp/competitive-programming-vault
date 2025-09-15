// #include<bits/stdc++.h>
// using namespace std ;


// int main(){
//     int n, k;
//     cin>>n>>k;
//     int pos[10][1010] , dp[1010] , a[1010][1010] ;

//     for( int i = 1 ; i <= k ; ++ i ){
//         for( int j = 1 ; j <= n ; ++ j ) {
//             cin>>a[i][j];
//             pos[i][a[i][j]] = j ;
//         }
//     }

//     int ans = 1 ;

//     for( int i = 1 ; i <= n ; ++ i ){
//         dp[i] = 1 ;
//         for( int j = 1 ; j < i ; ++ j ){
//             int ok = 1 ;
//             for( int zz = 1 ; zz <= k ; ++ zz ){
//                 if( pos[zz][a[1][j]] > pos[zz][a[1][i]] ){
//                     ok = 0 ;
//                     break ;
//                 }
//             }
//             if( ok == 1 ) dp[i] = max( dp[i] , dp[j] + 1 ) ;
//         }
//         ans = max( ans , dp[i] ) ;
//     }
 
//     cout << ans <<"\n" ;
 
//     return 0 ;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int pos[10][1001], dp[1001], a[1001][1001];
    for(int i=0;i<10;i++){
        for(int j=0;j<1001;j++){
            pos[i][j]=0;
            dp[j]=0;
        }
    }
    for(int i=0;i<1001;i++){
        for(int j=0;j<1001;j++){
            a[i][j]=0;
        }
    }
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            pos[i][a[i][j]] =j;
        }
    }

    int ans=1;

    for(int i=1;i<=n;i++){
        dp[i]=1;
        for(int j=1;j<i;j++){
            int ok=1;
            for(int z=1;z<=k;z++){
                if(pos[z][a[1][j]]>pos[z][a[1][i]]){
                    ok=0;
                    break;
                }
            }
            if(ok ==1){
                dp[i]= max(dp[i], dp[j]+1);
            }
        }
        ans=max(ans, dp[i]);
    }
    cout<<ans<<"\n";
    return 0;
}