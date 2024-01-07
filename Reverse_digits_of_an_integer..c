#include<stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Input an integer
    scanf("%d", &num);

    // Reverse the digits
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Print the reversed number
    printf("%d
", reversedNum);

    return 0;
}
