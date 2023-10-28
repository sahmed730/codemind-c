#include<stdio.h>
int main()
{
    int x,y,z,w;
    scanf("%d%d%d%d",&x,&y,&z,&w);
    
    if(x>=10 && y>=10 && z>=10 && w>=10)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
}