#include<bits/stdc++.h>
using namespace std;
int SnakeLadder(int board[])
{
    queue<pair<int,int> >q;
    q.push({1,0});
    while(!q.empty())
    {
        pair<int,int> k=q.front();
        int x=k.first;
        int y=k.second;
        q.pop();
        if(x==30)
        return y;
        for(int j=(x+1);j<=30 && j<=(x+6);j++)
        {
            int move=j,distance;
            distance=y+1;
            if(board[j]!= -1)
            move=board[j];
            q.push({move,distance});
        }
    }
 return -1;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int board[100];
	    memset(board,-1,sizeof(board));
	    for(int i=0;i<n;i++)
	    {
	            int a,b;
	            cin>>a>>b;
	            board[a]=b;
	    }
	    cout<<SnakeLadder(board)<<endl;
	}
	return 0;
}