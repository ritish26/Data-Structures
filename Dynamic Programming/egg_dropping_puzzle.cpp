#include<bits/stdc++.h>
using namespace std;
int dp[11][51];
int egg(int e,int f)
{
    if(dp[e][f]!=-1)
    return dp[e][f];
    if(f==1)
    return dp[e][f]=1;
    if(f==0)
    return dp[e][f]=0;
    if(e==1)
    return dp[e][f]=f;
    int mn=INT_MAX;
    for(int k=1;k<=f;k++)
    {
        int res=1+max(egg(e-1,k-1),egg(e,f-k));
        mn=min(mn,res);
    }
    return dp[e][f]=mn;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int e,f;
        memset(dp,-1,sizeof(dp));
        cin>>e>>f;
        cout<<egg(e,f)<<endl;
    }
}
