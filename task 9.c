#include <stdio.h>

typedef struct
{
    int salary;
    int bonus;
    int deduction;
} Employee;

int main()
{
    Employee emp[3];
   
    int i;
    int total = 0;

    for(i = 0; i < 3; i++)
    {
        printf("Enter Salary: ");
        scanf("%d", &emp[i].salary);

        printf("Enter Bonus: ");
        scanf("%d", &emp[i].bonus);

        printf("Enter Deduction: ");
        scanf("%d", &emp[i].deduction);

        total = total + emp[i].salary + emp[i].bonus - emp[i].deduction;
    }

    printf("\nTotal Value Needed = %d", total);

    return 0;
}
























