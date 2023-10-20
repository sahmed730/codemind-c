#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y;
    y=x%2;
    if(y==0&&x!=2)
    {
      printf("YES");  
    }
    else
    {
        printf("NO");
    }
    
}