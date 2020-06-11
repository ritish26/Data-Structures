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
        int counter=1,mask=1,ans=0;
        while(n)
        {
            if(mask & n)
            {
                ans=counter;
                break;
            }
            n>>=1; counter++;
        }
        cout<<ans;
        cout<<endl;
    }
    return 0;
}