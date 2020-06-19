#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int L[n],R[n];
        L[0]=arr[0];
        for(int i=1;i<n;i++)
        L[i]=min(L[i-1],arr[i]);
        R[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        R[i]=max(R[i+1],arr[i]);
        int i=0,j=0,max_diff=-1;
        while(i<n && j<n)
        {
            if(L[i]<=R[j])
            {
                max_diff=max(max_diff,j-i);
                j++;
            }
            else
            i++;
        }
       cout<<max_diff<<endl; 
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int L[n],R[n];
        L[0]=arr[0];
        for(int i=1;i<n;i++)
        L[i]=min(L[i-1],arr[i]);
        R[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        R[i]=max(R[i+1],arr[i]);
        int i=0,j=0,max_diff=-1;
        while(i<n && j<n)
        {
            if(L[i]<=R[j])
            {
                max_diff=max(max_diff,j-i);
                j++;
            }
            else
            i++;
        }
       cout<<max_diff<<endl; 
    }
}
