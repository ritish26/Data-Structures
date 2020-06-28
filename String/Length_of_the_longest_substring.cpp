#include<bits/stdc++.h>
using namespace std;
int LongestSubstring(string s)
{
    int n=s.length();
    int start=-1;
    int ans=0;
    map<char,int> um;
    for(int i=0;i<n;i++){
        
        if(um.find(s[i])!=um.end())
        {
            if(start<um[s[i]])
            {
                start=um[s[i]];
            }
            um[s[i]]=i;
        }
        else
        um[s[i]]=i;
        
        ans=max(ans,i-start);
    }
    return ans;
}
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<LongestSubstring(s)<<endl;
    }
    return 0;
}