#include <stdio.h>

int main() {
    int year;


    scanf("%d", &year);

    // Extract the last two digits
    int lastTwoDigits = year % 100;

    // Print the last two digits
    printf("%02d
", lastTwoDigits);

    return 0;
}
