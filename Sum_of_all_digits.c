#include<stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    int r,v=0,i;
    while(c>0)
    {
    r=c%10;
    v+=r;
    c/=10;
    }
    printf("%d",v);
}