#include<stdio.h>
int main()
{
    int a,da,hra;
    scanf("%d",&a);
    if(a<=10000)
    {
        da=80;
        hra=20;
    }else if(a<=20000)
    {
        da=90;
        hra=25;
    }else
    {
        da=95;
        hra=30;
    }
    float f=(da*a)/100;
    float r=(hra*a)/100;
    float s=a+f+r;
    printf("%.2f",s);
}