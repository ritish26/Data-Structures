#include<bits/stdc++.h>
using namespace std;
int isvalid(char c)
{
    if(tolower(c)>='a' && tolower(c)<='z') return 1;
    if(c>='0' && c<='9') return 1;
    return 0;
}
int ischeck(string result)
{
    int i=0,j=result.size()-1;
    while(i<j)
    {
        if(result[i]!=result[j]) return 0;
        i++; j--;
    }
    return 1;
}
int main()
 {
	//code
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    string s,result;
	    getline(cin,s);
	    for(int i=0;i<s.length();i++)
	    {
	        if(isvalid(s[i]))
	        result+=tolower(s[i]);
	    }
	    if(ischeck(result)) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	}
	return 0;
}