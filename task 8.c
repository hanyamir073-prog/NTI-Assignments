#include <stdio.h>

struct Employee
{
    int salary;
    int bonus;
    int deduction;
};

int main()
{
    struct Employee emp[3];
    char name[3][10] = {"Ahmed", "Waleed", "Amr"};

    int i;
    int total = 0;

    for(i = 0; i < 3; i++)
    {
        printf("Enter %s Salary: ", name[i]);
        scanf("%d", &emp[i].salary);

        printf("Enter %s Bonus: ", name[i]);
        scanf("%d", &emp[i].bonus);

        printf("Enter %s Deduction: ", name[i]);
        scanf("%d", &emp[i].deduction);

        total = total + emp[i].salary + emp[i].bonus - emp[i].deduction;
    }

    printf("\nTotal Value Needed = %d", total);

    return 0;
}




















