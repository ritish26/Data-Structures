#include<bits/stdc++.h>
using namespace std;
int FindPath(vector<int> V[],int start,int end,int N,vector<int> visited[])
{
    if(start<0 ||end<0 ||start>=N ||end>=N || visited[start][end]==1 ||V[start][end]==0)
    return 0;
    visited[start][end]=1;
    if(V[start][end]==2)
    return 1;
  
    if(FindPath(V,start-1,end,N,visited)||FindPath(V,start+1,end,N,visited)
    ||FindPath(V,start,end+1,N,visited)||FindPath(V,start,end-1,N,visited))
    return 1;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int N,start,end;
	    cin>>N;
	    vector<int> V[N]; 
	    vector<int> visited[N];
	    for(int i=0;i<N;i++)
	    {
	        for(int j=0;j<N;j++)
	        {
	            int x;
	            cin>>x;
	            V[i].push_back(x);
	            visited[i].push_back(0);
	            if(x==1)
	            {
	                start=i;
	                end=j;
	            }
	        }
	    }
	    
	    int x;
	    x=FindPath(V,start,end,N,visited);
	    cout<<x<<endl;
	}
	return 0;
}