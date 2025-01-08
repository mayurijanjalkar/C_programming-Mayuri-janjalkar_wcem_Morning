#include <stdio.h>

int main() {
    int employee_id;
    float worked_hours, hourly_wage, salary;

    
    printf("Enter employee's ID: ");
    scanf("%d", &employee_id);
    printf("Enter total worked hours: ");
    scanf("%f", &worked_hours);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    
    salary = worked_hours * hourly_wage;

    
    printf("Employee ID: %d\n", employee_id);
    printf("Salary: %.2f\n", salary);

    
}