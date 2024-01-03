#include<stdio.h>
int main(){
    char m;
    scanf("%c",&m);
    int n=m;
    if(n==86)
    {
        printf("Violet");
    }
    else if(n==73)
    {
        printf("Indigo");
    }
    else if(n==66)
    {
        printf("Blue");
    }
    else if(n==71)
    {
        printf("Green");
    }
    else if(n==89)
    {
        printf("Yellow");
    }
    else if(n==79)
    {
        printf("Orange");
    }
    else if(n==82)
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}