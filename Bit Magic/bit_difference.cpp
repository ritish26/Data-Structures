#include<bits/stdc++.h>
using namespace std;
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int result=n^m;
        int mask=1,counter=0;
        while(result)
        {
            if(mask & result)
            {
                counter++;
            }
            result>>=1; 
        }
        cout<<counter<<endl;
    }
    return 0;
}