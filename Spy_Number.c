#include<stdio.h>
int main()
{
    int a,sum=0,product=1;
    scanf("%d",&a);
    while (a>0)
    {
       int digit=a%10;
        sum+=digit;
        product*=digit;
        a/=10;
        
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}