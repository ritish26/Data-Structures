void merge(int arr[], int l, int m, int r)
{
     // Your code here
     int n1=m-l+1;
     int n2=r-m;
     int L1[n1],L2[n2];
     for(int i=0;i<n1;i++) L1[i]=arr[l+i];
     for(int i=0;i<n2;i++) L2[i]=arr[m+i+1];
     int i=0,j=0,k=l;
     while(i<n1 && j<n2)
     {
         if(L1[i]<=L2[j])
         {
             arr[k]=L1[i];
             k++;
             i++;
         }
         else
         {
             arr[k]=L2[j];
             k++;
             j++;
         }
     }
     while(i<n1)
     {
         arr[k]=L1[i];
         i++;k++;
     }
      while(j<n2)
     {
         arr[k]=L2[j];
         j++;k++;
     }
     
}