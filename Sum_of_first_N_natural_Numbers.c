#include<stdio.h>
int main(){
    int i,y,sum=0;
    scanf("%d",&y);
    for(i=0;i<=y;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
}