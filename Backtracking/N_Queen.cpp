using namespace std;
int arr[10][10];
void display(int arr[][10],int n)
{
    cout<<'[';
    for(int j=0;j<n;j++)
    for(int i=0;i<n;i++)
    if(arr[i][j]==1) cout<<i+1<<" ";
    cout<<']'<<" ";
}
bool issafe(int arr[][10],int row,int col,int n)
{
    for(int i=0;i<col;i++)
    {
        if(arr[row][i]==1) return false;
    }
    int i=row,j=col;
    while(i>=0&&j>=0)
    {
        if(arr[i][j]==1) return false;
        i--;
        j--;
    }
    i=row;
    j=col;
    while(i<n&&j>=0)
    {
        if(arr[i][j]==1) return false;
        i++;
        j--;
    }
    return true;
}
bool NQueen(int arr[][10],int n,int col)
{
    if(col==n)
    {
        display(arr,n);
        return true;
    }
    bool res=false;
    for(int i=0;i<n;i++)
    {
        if(issafe(arr,i,col,n))
        {
            arr[i][col]=1;
            res=NQueen(arr,n,col+1)||res;
            arr[i][col]=0;
        }
        
    }
    return res;
}
void solvenq(int n)
{
     memset(arr,0,sizeof(arr));
     if(NQueen(arr,n,0)==false)
        cout<<"-1"; 
        
        return;
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
        solvenq(n);
        cout<<endl;
        
    }
    return 0;
}