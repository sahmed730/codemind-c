#include <stdio.h>

int main() {
    int totalAmount, dailyExpenditure;
    scanf("%d %d", &totalAmount, &dailyExpenditure);

    // Calculate the total expenditure for the month
    int totalExpenditure = dailyExpenditure * 30;

    // Check if Akshat has enough money
    if (totalAmount >= totalExpenditure) {
        printf("YES
");
    } else {
        printf("NO
");
    }

    return 0;
}
