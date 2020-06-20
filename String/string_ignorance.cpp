#include<bits/stdc++.h>
using namespace std;
int main()
 {
    //code
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        unordered_map<char,int> um;
        for(int i=0;i<str.length();i++)
        {
            char temp=tolower(str[i]);
            if(um.find(temp)==um.end())
            {
                um[temp]=1;
                cout<<str[i];
            }
            else
            um.erase(temp);
        }
       cout<<endl;
    }
    return 0;
}