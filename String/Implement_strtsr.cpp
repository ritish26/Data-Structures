oid computeLPSArray(string pat,int M,int *lps); 
int KMPsearch(string text,string pat)
{
    int N=text.length();
    int M=pat.length();
    int lps[M];
    computeLPSArray(pat,M,lps);
    int i=0,j=0;
    while(i<N)
    {
        if(text[i]==pat[j])
        {
            i++;
            j++;
        }
        if(j==M)
        { return i-j; j=lps[j-1]; }
        else if(i<N && pat[j]!=text[i])
        {
            if(j!=0)
            j=lps[j-1];
            else
            i=i+1;
        }
    }
   return -1; 
}
void computeLPSArray(string pat,int M,int *lps)
{
    lps[0]=0;
    int len=0,i=1;
    while(i<M)
    {
        if(pat[i]==pat[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
    
}
int strstr(string s, string x)
{
    return KMPsearch(s,x);
}
