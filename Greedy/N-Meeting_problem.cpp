#include<bits/stdc++.h>
using namespace std;
class Meet{
    public:
    int s;
    int e;
    int p;
};
int comp(Meet x1,Meet x2)
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
        int a[n],b[n];
        Meet *arr=new Meet[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++)
        {
            arr[i].s=a[i];
            arr[i].e=b[i];
            arr[i].p=i+1;
        }
        sort(arr,arr+n,comp);
        vector<int> ans;
        ans.push_back(arr[0].p);
        int j=1,i=0;
        while(j<n && i<n)
        {
            if(arr[j].s>=arr[i].e)
            {
                ans.push_back(arr[j].p);
                i=j;
            }
            j++;
        }
        for(int i=0;i!=ans.size();i++)
        cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}