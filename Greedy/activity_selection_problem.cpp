#include<bits/stdc++.h>
using namespace std;
class Jobs{
  public:
  int s;
  int e;
};
bool comp(Jobs x1,Jobs x2)
{
    return(x1.e<x2.e);
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
        Jobs *arr=new Jobs[n];
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr[i].s=x;
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr[i].e=x;
        }
        sort(arr,arr+n,comp);
        int j=1,i=0,count=1;
        while(j<n && i<n)
        {
            if(arr[i].e<=arr[j].s)
            {
                count++;
                i=j;
            }
            j++;
        }
        cout<<count<<endl;
        
    }
    return 0;
}