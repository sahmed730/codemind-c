#include<stdio.h>
int main()
{
    int g=0,i;
    char a[40];
    scanf("%[^
]",a);
    for(i=0;a[i]!=NULL;i++)
    {
        int c=a[i];
        while(c==97||c==101||c==105||c==111||c==117)
        {
           g=g+1; 
           break;
        }
    
    }  printf("%d",g);  
    
}