#include<stdio.h>
int main(){

    int N;
    scanf("%d", &N);
    int re = 52 - N;
    int m = re % N;

    printf("%d
", m);

    return 0;
}

