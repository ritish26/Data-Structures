#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
	    int n1,n2;
	    cin>>n1>>n2;
	    cin>>s1>>s2;
	    int dp[n1+1][n2+1];
	    for(int i=0;i<=n1;i++)
	    {
	        for(int j=0;j<=n2;j++)
	        dp[i][j]=0;
	    }
	    int result=0;
	    for(int i=1;i<=n1;i++)
	    {
	       for(int j=1;j<=n2;j++)
	       {
	           if(s1[i-1]==s2[j-1])
	           dp[i][j]=1+dp[i-1][j-1];
	           result=max(result,dp[i][j]);
	       }
	    }
	    cout<<result<<endl;
	}
	return 0;
}