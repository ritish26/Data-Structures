#include<bits/stdc++.h>
using namespace std;
int KP(int v[],int wt[],int n,int w)
{
    int dp[n+1][w+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(wt[i-1]>j) dp[i][j]=dp[i-1][j];
            else
            dp[i][j]=max(v[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
        }
    }
    return dp[n][w];
}
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        int n,w;
        cin>>n>>w;
        int v[n],wt[n];
        for(int i=0;i<n;i++) cin>>v[i];
        for(int j=0;j<n;j++) cin>>wt[j];
        cout<<KP(v,wt,n,w)<<endl;
    }
    return 0;
}