#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(s1.size()<s2.size() || s1.size()==s2.size() && (s1!=s2))
        {
            cout<<-1<<endl;
            continue;
        }
        int need[256]={0};
        for(int i=0;i<s2.size();i++)
        need[s2[i]]++;
        int i=0,j=0,l=0,r=0,count=s2.size();
        while(r<s1.size())
        {
           if(need[s1[r]]>0)
           count--;
           need[s1[r]]--;
           while(count==0)
           {
               if(j==0 || r-l<j-i)
               j=r,i=l;
               need[s1[l]]++;
               if(need[s1[l]]>0)
               count++;
               l++;
           }
           r++;
        }
        if(i==0 && j==0)
        cout<<-1<<endl;
        else
        for(;i<=j;i++)
        cout<<s1[i];
        cout<<endl;
    }
}