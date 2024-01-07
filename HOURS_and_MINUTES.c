#include <stdio.h>

int main() {
    // Input total minutes as an integer
    int total_minutes;
    scanf("%d", &total_minutes);

    // Calculate hours and minutes
    int hours = total_minutes / 60;
    int minutes = total_minutes % 60;

    // Print the results
    printf("%d Hour(s) %d Minute(s)
", hours, minutes);

    return 0;
}
