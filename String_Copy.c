#include<stdio.h>
#include<string.h>
int main()
{
    char a[40];
    scanf("%39[^
]",a);
    char b[40];
    strcpy(b,a);
    printf("%s",b);
    
}