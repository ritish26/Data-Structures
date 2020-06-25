#include<algorithm> 
using namespace std;
void swap(int *a,int *b){
    int *c;
    *c=*a;
    *a=*b;
    *b=*c;
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
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      
      sort(arr,arr+n);
      for(int i=0;i<n-1;i+=2){
          swap( &arr[i], &arr[i+1]);
      }
      
      for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      }
      cout<<"\n";
  }
  return 0;
}