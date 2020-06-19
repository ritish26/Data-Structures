#include<bits/stdc++.h>
using namespace std;
int comp(int x,int y)
{
    return abs(x)<abs(y);
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
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n,comp);
        int index1,index2,min_sum=INT_MAX;
        for(int i=1;i<n;i++)
        {
            if(abs(arr[i-1]+arr[i])<=min_sum)
            {
                min_sum=abs(arr[i-1]+arr[i]);
                index1=i-1;
                index2=i;
            }
            
        }
        cout<<arr[index1]+arr[index2]<<endl;
    }
    return 0;
}