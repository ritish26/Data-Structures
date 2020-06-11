#include<bits/stdc++.h>
using namespace std;
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r;
        cin>>n>>l>>r;
        int power=0,mask=1,i=1,val=0;
        while(i<l)
        {
            if(mask & n)
            val+=pow(2,power);
            power++;
            i++;
            mask<<=1;
        }
        while(i<=r)
        {
           if(!(mask & n))
           val+=pow(2,power);
           power++;
           i++;
           mask<<=1;
        }
        while(i<=10)
        {
           if(mask & n)
            val+=pow(2,power);
            power++;
            i++;
            mask<<=1; 
        }
       cout<<val<<endl;     
    }
    return 0;
}