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
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int b[n][n],c[n][n];
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        for(int i=0;i<n;i++)
        {
            b[i][i]=a[i];
            c[i][i]=0;
        }
        for(int d=0;d<n-1;d++)
        {
            for(int i=0;i<n-1;i++)
            {
                int j=d+i+1;
                if(j>n-1){ j=0; break; }
                if(a[i]+c[i+1][j]>a[j]+c[i][j-1])
                {
                    c[i][j]=b[i+1][j];
                    b[i][j]=a[i]+c[i+1][j];
                }
                else
                {  
                    c[i][j]=b[i][j-1];
                    b[i][j]=a[j]+c[i][j-1];
                }
            }
        }
        cout<<b[0][n-1]<<endl;
    }
    return 0;
}