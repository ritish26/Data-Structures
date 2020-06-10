vector<string> result;
int visited[MAX][MAX];
int issafe(int i,int j,int n,int m[MAX][MAX],int visited[MAX][MAX])
{
    if(i>=0&&j>=0&&i<n&&j<n&&m[i][j]==1&&visited[i][j]==0) return 1;
    else
    return 0;
}
void RatMaze(int m[MAX][MAX],string result1,int i,int j,int n)
{
    if(i==n-1 && j==n-1)
    {
        result.push_back(result1);
        return;
    }
    
    if(issafe(i,j,n,m,visited))
    {
    visited[i][j]=1;
    RatMaze(m,result1+"L",i,j-1,n);
    RatMaze(m,result1+"D",i+1,j,n);
    RatMaze(m,result1+"U",i-1,j,n);
    RatMaze(m,result1+"R",i,j+1,n);
    visited[i][j]=0;
    }
    
}
vector<string> printPath(int m[MAX][MAX], int n) {
    // Your code goes here
    memset(visited,0,sizeof(visited));
    result.clear();
    if(m[0][0]==0 || m[n-1][n-1]==0) return result;
    RatMaze(m,"",0,0,n);
    sort(result.begin(),result.end());
    return result;
}
