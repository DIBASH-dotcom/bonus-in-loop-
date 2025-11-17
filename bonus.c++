#include <stdio.h>

int main() {
    int exp, salary, i;
    char rating;
    float bonus = 0, extrabonus = 0, finalpayment;

    for (i = 0; i < 5; i++) {

        printf("\n--- Employee %d ---\n", i + 1);

        printf("Enter Experience (years): ");
        scanf("%d", &exp);

        printf("Enter Salary: ");
        scanf("%d", &salary);

        printf("Enter Rating (A/B/C): ");
        scanf(" %c", &rating);  
       
        bonus = 0;

        
        if (exp >= 10) {
            if (rating == 'A' || rating == 'a')
                bonus = 0.25 * salary;
            else if (rating == 'B' || rating == 'b')
                bonus = 0.15 * salary;
            else if (rating == 'C' || rating == 'c')
                bonus = 0.10 * salary;
        }
        else if (exp >= 5) {
            if (rating == 'A' || rating == 'a')
                bonus = 0.12 * salary;
            else if (rating == 'B' || rating == 'b')
                bonus = 0.08 * salary;
            else if (rating == 'C' || rating == 'c')
                bonus = 0.05 * salary;
        }
        else {
            bonus = 0;
        }

        
        if (bonus > 10000)
            extrabonus = 0.05 * bonus;
        else
            extrabonus = 0;

        
        finalpayment = salary + bonus + extrabonus;

        
        printf("Bonus: %.2f\n", bonus);
        printf("Extra Bonus: %.2f\n", extrabonus);
        printf("Final Payment: %.2f\n", finalpayment);
    }

    return 0;
}
