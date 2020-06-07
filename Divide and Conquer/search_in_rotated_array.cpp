#include<bits/stdc++.h>
using namespace std;
int RotatedArray(int arr[],int l,int h,int k)
{
    if(l>h) return -1;
    int mid=(l+h)/2;
    if(arr[mid]==k) return mid;
    if(arr[l]<=arr[mid])
    {
        if(k<=arr[mid] && k>=arr[l])
        return RotatedArray(arr,l,mid-1,k);
        return RotatedArray(arr,mid+1,h,k);
    }
    
        if(k>=arr[mid] && k<=arr[h])
        return RotatedArray(arr,mid+1,h,k);
        return RotatedArray(arr,l,mid-1,k);
}
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        cin>>k;
        cout<<RotatedArray(arr,0,n-1,k);
        cout<<endl;
        
    }
    return 0;
}