#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
	    cin>>s1>>s2;
	    if(s1.length()==s2.length() && (s1+s1).find(s2)!=string::npos)
	    {
	        cout<<1<<endl;
	    }
	    else
	    cout<<0<<endl;
	}
	return 0;
}