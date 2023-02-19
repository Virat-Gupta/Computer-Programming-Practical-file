#include <stdio.h>

int main() {
    char name[50];
    int level, basic_salary;
    float ta, entertainment_allowance, hra, gross_salary, tax, net_salary;
    
    // Read employee data
    printf("Enter name: ");
    scanf("%s", name);
    
    printf("Enter level (1-4): ");
    scanf("%d", &level);
    
    printf("Enter basic salary: ");
    scanf("%d", &basic_salary);
    
    // Calculate perks based on level
    switch (level) {
        case 1:
            ta = 7000;
            entertainment_allowance = 3000;
            break;
        case 2:
            ta = 6000;
            entertainment_allowance = 2000;
            break;
        case 3:
            ta = 5000;
            entertainment_allowance = 1500;
            break;
        case 4:
            ta = 5000;
            entertainment_allowance = 1500;
            break;
        default:
            printf("Invalid level\n");
            return 1;
    }
    
    // Calculate HRA
    hra = 0.25 * basic_salary;
    
    // Calculate gross salary
    gross_salary = basic_salary + ta + entertainment_allowance + hra;
    
    // Calculate tax based on level
    if (basic_salary >= 40000 && basic_salary <= 60000) {
        tax = 0.1 * gross_salary;
    } else if (basic_salary >= 30000 && basic_salary < 40000) {
        tax = 0.08 * gross_salary;
    } else if (basic_salary >= 20000 && basic_salary < 30000) {
        tax = 0.05 * gross_salary;
    } else if (basic_salary >= 15000 && basic_salary < 20000) {
        tax = 0;
    } else {
        printf("Invalid basic salary\n");
        return 1;
    }
    
    // Calculate net salary
    net_salary = gross_salary - tax;
    
    // Print results
    printf("Name: %s\n", name);
    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Tax: %.2f\n", tax);
    printf("Net Salary: %.2f\n", net_salary);
    
    return 0;
}
