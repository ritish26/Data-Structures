#include<bits/stdc++.h>
using namespace std;
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        int n,result=0;
        cin>>n;
        int ans[n+1];
        ans[0]=0;
        for(int i=1;i<=n;i++)
        {
            ans[i]=ans[i/2]+i%2;
            result+=ans[i];
        }
        cout<<result<<endl;
    }
    return 0;
}