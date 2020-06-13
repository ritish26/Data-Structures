bool comp(struct val p,struct val q)
{
    return p.first<q.first;
}
int maxChainLen(struct val p[],int n)
{
    int dp[n];
    for(int i=0;i<n;i++) dp[i]=1;
    sort(p,p+n,comp);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(p[i].first>p[j].second && dp[i]<dp[j]+1)
            dp[i]=dp[j]+1;
        }
    }
  return *max_element(dp,dp+n);
}