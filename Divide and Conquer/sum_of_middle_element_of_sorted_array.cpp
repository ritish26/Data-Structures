#include<bits/stdc++.h>
using namespace std;
int SumofMiddleElement(int a[],int b[],int n)
{
    int i=0,j=0;
    int m1=-1,m2=-1;
    for(int count=0;count<=n;count++)
    {
        if(i==n)
        {
            m1=m2;
            m2=b[0];
            break;
        }
        if(j==n)
        {
            m1=m2;
            m2=a[0];
            break;
        }
        if(a[i]<b[j])
        {
           m1=m2;
           m2=a[i];
           i++;
        }
        else
        {
            m1=m2;
            m2=b[j];
            j++;
        }
    }
    return m1+m2;
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
      for(int i=0;i<n;i++) cin>>a[i];
      for(int i=0;i<n;i++) cin>>b[i];
      cout<<SumofMiddleElement(a,b,n)<<endl;;
  }
  return 0;
}