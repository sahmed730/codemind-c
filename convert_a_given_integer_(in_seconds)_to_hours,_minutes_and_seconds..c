#include<stdio.h>
int main()
{
    int n,sec,hrs,min;
    scanf("%d",&n);
    hrs=n/3600;
    min=(n-(3600*hrs))/60;
    sec=(n-(3600*hrs)-(min*60));
    printf("H:M:S-%d:%d:%d",hrs,min,sec);
}