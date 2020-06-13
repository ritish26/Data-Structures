#include<bits/stdc++.h>
using namespace std;
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,j;
        cin>>n;
        long long int arr[n],dp[n];
        for(i=0;i<n;i++)
        {
             cin>>arr[i];
             dp[i]=arr[i];
        }
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if((arr[i]>arr[j]) && (dp[j]+arr[i]>dp[i]))
                dp[i]=dp[j]+arr[i];
            }
        }
      cout<<*max_element(dp,dp+n)<<endl;
    }
    return 0;
}