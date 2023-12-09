#include<stdio.h>
int main(){
    int g;
    scanf("%d",&g);
    if(g%2==1){
        printf("weird");
    }
    if(g%2==0){
        printf("not weird");
    }
}