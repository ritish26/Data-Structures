#include<bits/stdc++.h>
using namespace std;
void Kthstream(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int> >q;
    for(int i=0;i<n;i++)
    {
        if(q.size()<k)
        {
            q.push(arr[i]);
            if(q.size()==k)
            {
                cout<<q.top()<<" ";
            }
            else
            cout<<-1<<" ";
        }
        else if(q.size()==k && arr[i]<=q.top())
        cout<<q.top()<<" ";
        else if(q.size()==k && arr[i]>q.top())
        {
            q.pop();
            q.push(arr[i]);
            cout<<q.top()<<" ";
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>k>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        Kthstream(arr,n,k);
        cout<<endl;
    }
}