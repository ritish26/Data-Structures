string ExcelColumn(int n)
{
    // Your code goes here
    string result;
    int rem;
    while(n>0)
    {
        rem=n%26;
        if(rem==0)
        {
            result+='Z';
            n=n/26-1;
        }
        else
        {
            result+='A'+(rem-1);
            n=n/26;
        }
    }
    reverse(result.begin(),result.end());
    return result;
}