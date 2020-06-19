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
        unordered_map<int,int> um;
        for(int i=0;i<n;i++) 
        {
            cin>>arr[i];
            um[arr[i]]++;
        }
        int f=0;
        for(auto i=um.begin();i!=um.end();i++)
        {
            if(i->second > n/2)
            {
                f=1;
                cout<<i->first<<endl;
                break;
            }
        }
        if(f==0)
        cout<<-1<<endl;
    }
    return 0;
}