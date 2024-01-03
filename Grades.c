#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int add=((a+b+c+d+e)*100)/500;
    if(add>=90)
    {
        printf("Grade A");
    }
    else if(add>=80)
    {
        printf("Grade B");
    }
    else if(add>=70)
    {
        printf("Grade C");
    }
    else if(add>=60)
    {
        printf("Grade D");
    }
    else if(add>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}