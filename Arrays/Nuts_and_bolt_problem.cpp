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
        char x;
        vector<char> nuts;
        map<char,int> um;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            nuts.push_back(x);
        }
        sort(nuts.begin(),nuts.end());
        for(int i=0;i<n;i++)
        {
            cin>>x;
            um[x]++;
        }
        vector<char> res;
        for(int i=0;i<nuts.size();i++)
        {
            if(um.find(nuts[i])!=um.end() && um[nuts[i]]!=0)
           {
                res.push_back(nuts[i]);
                um[nuts[i]]--;
           }
        }
        for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<endl;
        for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<endl;
        
    }
    return 0;
}