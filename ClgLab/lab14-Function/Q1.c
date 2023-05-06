//  WAP to calculate the gross salary of an employee by giving basic salary 
// using a user defined function. Also calculate DA(60%) HRA(15%)Gross 
// salary = Basic + DA+ HRA 


#include <stdio.h>

float calculate_gross_salary(float basic_salary) {
    float da = 0.6 * basic_salary;
    float hra = 0.15 * basic_salary;
    float gross_salary = basic_salary + da + hra;
    return gross_salary;
}

int main() {
    float basic_salary, gross_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    gross_salary = calculate_gross_salary(basic_salary);
    printf("Gross salary: %.2f", gross_salary);
    return 0;
}
