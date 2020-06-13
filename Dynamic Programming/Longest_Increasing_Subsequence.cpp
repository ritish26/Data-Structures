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
	         dp[i]=1;
	    }
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(dp[i]<dp[j]+1 && arr[i]>arr[j])
	            dp[i]=dp[j]+1;
	        }
	    }
	    cout<<*max_element(dp,dp+n)<<endl;
	}
	return 0;
}