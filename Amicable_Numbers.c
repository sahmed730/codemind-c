#include<stdio.h>
int main()
{
    int a,b,h=0,k=0,i,z,l,j;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        
        z=a%i;
        if(z==0)
        {
           h=h+i;
        }
        
    }
    for(j=1;j<b;j++)
    {
        
        l=b%j;
        if(l==0)
        {
           k=k+j;
        }
        
    }
    if(k==a&&h==b)
    {
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
}