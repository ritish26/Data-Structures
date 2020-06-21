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
	    unordered_map<string,int> um;
	    for(int i=0;i<n;i++)
	    {
	        string x;
	        cin>>x;
	        um[x]++;
	    }
	    int mx=INT_MIN;
	    string key;
	    for(auto i=um.begin();i!=um.end();i++)
	    {
	        if(i->second > mx)
	        {
	            mx=i->second;
	            key=i->first;
	        }
	    }
	    um.erase(key);
	    mx=INT_MIN;
	    for(auto i=um.begin();i!=um.end();i++)
	    {
	       if(i->second > mx)
	       {
	           mx=i->second;
	           key=i->first;
	       }
	    }
	    cout<<key;
	    cout<<endl;
	}
	return 0;
}