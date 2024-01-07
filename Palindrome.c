#include<stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input an integer
    scanf("%d", &num);

    // Save the original number
    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reversedNum) {
        printf("Palindrome
");
    } else {
        printf("Not Palindrome
");
    }

    return 0;
}
