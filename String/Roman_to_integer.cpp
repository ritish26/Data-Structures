string convertToRoman(int n) 
{
    int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;
    string result;
    while(n>0)
    {
        int d=n/num[i];
        n=n%num[i];
        while(d--)
        {
            result+=sym[i];
        }
        i--;
    }
    
   return result; 
}