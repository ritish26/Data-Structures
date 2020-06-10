#include<bits/stdc++.h>
using namespace std;
vector<int>rowOffset={-1,-1,-1,0,0,1,1,1};
vector<int>colOffset={-1,0,1,-1,1,-1,0,1};
set<string> s;
vector<string> ans;
bool isWord(int n,string str)
{
    if(s.find(str)!=s.end()) return true;
    return false;
}
void findWords(int maxLen,int N,vector<vector<char>>boggle,int n,int m,vector<vector<bool>>visited,int i,int j,string str)
{
    visited[i][j]=true;
    str+=boggle[i][j];
    if(str.length()>maxLen)
    return;
    if(isWord(N,str))
    {
        ans.push_back(str);
       //cout<<str<<" ";
        s.erase(str);
        return;
    }
    for(int k=0;k<8;k++)
    {
        int u=i+rowOffset[k];
        int v=j+colOffset[k];
        if(u>=0&&u<n&&v>=0&&v<m&&!visited[u][v])
        {
            findWords(maxLen,N,boggle,n,m,visited,u,v,str);
        }
    }
    str.pop_back();
    visited[i][j]=0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int N;
    cin>>N;
    vector<string> dict(N);
    s.clear();
    for(int i=0;i<N;i++)
    {
        cin>>dict[i];
        s.insert(dict[i]);
    }
    int n,m;
    cin>>n>>m;
    vector<vector<char>>boggle(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>boggle[i][j];
        }
    }
    vector<vector<bool>>visited(n,vector<bool>(m,false));
    string str;
    int maxLen=0;
    for(int i=0;i<N;i++)
    {
        if(dict[i].size()>maxLen)
        maxLen=dict[i].size();
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            findWords(maxLen,N,boggle,n,m,visited,i,j,str);
        }
    }
    if(ans.size()!=0)
    {
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    ans.clear();
    }
    else cout<<-1;
    cout<<endl;
    }
    return 0;
}