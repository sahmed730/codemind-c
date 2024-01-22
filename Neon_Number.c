#include<stdio.h>
int main()
{
    int a,res=0,digit=0;
    scanf("%d",&a);
    int sq=a*a;
    while(sq>0)
    {
        digit=sq%10;
        res+=digit;
        sq/=10;
        
    }
    if(res==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}