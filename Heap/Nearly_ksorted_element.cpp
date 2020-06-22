#include<bits/stdc++.h>
using namespace std;
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        priority_queue<int,vector<int>,greater<int> >pq(arr,arr+k+1);
        int index=0;
        for(int i=k+1;i<n;i++)
        {
            cout<<pq.top()<<" ";
            pq.pop();
            pq.push(arr[i]);
        }
        while(!pq.empty())
        {
            cout<<pq.top()<<" ";
            pq.pop();
        }
        cout<<endl;
    }
    return 0;
}