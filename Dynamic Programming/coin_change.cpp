
#include<bits/stdc++.h>
using namespace std;
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int arr[n+1]; arr[0]=0;
        for(int i=1;i<=n;i++) cin>>arr[i];
        cin>>m;
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(j>=arr[i])  dp[i][j]=dp[i-1][j]+dp[i][j-arr[i]];
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        cout<<dp[n][m]<<endl;
    }
    return 0;
}