#include<stdio.h>

int main() {
    int num;

    // Input an integer
    scanf("%d", &num);

    // Check if the number is divisible by 9
    if (num % 9 == 0) {
        printf("True
");
    } else {
        printf("False
");
    }

    return 0;
}
