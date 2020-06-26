int findMissing(int arr[], int n) { 
    
    int val;
    int next_value;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=0 || arr[i]>n)
        continue;
        val=arr[i];
        while(arr[val-1]!=val)
        {
           next_value=arr[val-1];
           arr[val-1]=val;
           val=next_value;
           if(val<=0 || val>n)
           break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        return i+1;
    }
    
    return n+1;
}