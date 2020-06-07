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
        int arr[n];
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        for(auto i=m.begin();i!=m.end();i++)
        {
            if(i->second==1)
            {
                cout<<i->first<<endl;
                break;
            }
        }
    }
    return 0;
}