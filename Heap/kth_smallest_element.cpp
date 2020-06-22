#include<bits/stdc++.h>
using namespace std;
int n;
void heapify(int *arr,int smallest)
{
    int i=smallest;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]<arr[smallest])
    smallest=l;
    if(r<n && arr[r]<arr[smallest])
    smallest=r;
    if(smallest!=i)
    {
        swap(arr[smallest],arr[i]);
        heapify(arr,smallest);
    }
}
void extract_min(int *arr)
{
    int root=arr[0];
    if(n>1)
    {
    arr[0]=arr[n-1];
    heapify(arr,0);
    }
    n--;
}
void Build_heap(int *arr,int k)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        heapify(arr,i);
    }
    for(int i=0;i<k-1;i++)
    extract_min(arr);
    cout<<arr[0];
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    cin>>k;
	    Build_heap(arr,k);
	    cout<<endl;
	    
	}
	return 0;
}