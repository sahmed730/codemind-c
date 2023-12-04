#include<stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    int v,sum,last;
    v=c%10;
    while(c>=10){
        c/=10;
    }
    last=c;
    sum=last+v;
    printf("%d",sum);
    
}