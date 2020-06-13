#include<bits/stdc++.h>
using namespace std;
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],dp[n];
        for(int i=0;i<n;i++)
        {
             cin>>arr[i];
             dp[i]=INT_MAX;
        }
        dp[0]=0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(j+arr[j]>=i && dp[i]>dp[j]+1)
                dp[i]=dp[j]+1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(dp[i]==INT_MAX)
            dp[i]=-1;
        }
        if(dp[n-1]>0)
        cout<<dp[n-1]<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}