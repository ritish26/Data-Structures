#include<bits/stdc++.h>
using namespace std;
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n<=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        long long ans=log2(n);
        if(pow(2,ans)==n)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        
    }
    return 0;
}