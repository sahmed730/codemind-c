#include <stdio.h>

int main() {
    // Input the number of 5 rupee coins, 10 rupee coins, and cost of each chocolate
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    // Calculate the maximum number of chocolates Romeo can buy
    int chocolates = (x * 5 + y * 10) / z;

    // Print the result
    printf("%d
", chocolates);

    return 0;
}
