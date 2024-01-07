#include <stdio.h>

int main() {
    // Input Basic Salary, HRA, and DA as float values
    float basic_salary, hra, da;
    scanf("%f", &basic_salary);
    scanf("%f", &hra);
    scanf("%f", &da);

    // Calculate PF (12% of Basic Salary)
    float pf = 0.12 * basic_salary;

    // Calculate Gross Salary (Basic Salary + HRA + DA + PF)
    float gross_salary = basic_salary + hra + da + pf;

    printf("%.2f
", pf);
    printf("%.2f
", gross_salary);

    return 0;
}
