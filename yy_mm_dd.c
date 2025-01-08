 #include <stdio.h>

int main() {
    int days, years, weeks, remaining_days;

    
    printf("Enter the number of days: ");
    scanf("%d", &days);

    
    years = days / 365;
    
    printf("%d days is equivalent to:\n", days);
    remaining_days = days % 365;
    printf("%d years\n", years);
    weeks = remaining_days / 7;
    printf("%d weeks\n", weeks);
    remaining_days = remaining_days % 7;
    printf("%d days\n", remaining_days);

    
    
    
    

    
}
