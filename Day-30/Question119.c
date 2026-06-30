//Mini Employee Management System

#include <stdio.h>

struct Employee
{
    int empID;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int numb = 0, choice;

    do
    {
        printf("\n===== Mini Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of employees: ");
                scanf("%d", &numb);

                for(int i = 0; i < numb; i++)
                {
                    printf("\nEmployee %d\n", i + 1);

                    printf("Enter Employee ID: ");
                    scanf("%d", &emp[i].empID);

                    printf("Enter Employee Name: ");
                    scanf("%s", emp[i].name);

                    printf("Enter Salary: ");
                    scanf("%f", &emp[i].salary);
                }

                printf("\nEmployee details added successfully!\n");
                break;

            case 2:
                if(numb == 0)
                {
                    printf("No employee records found.\n");
                }
                else
                {
                    printf("\n----- Employee Records -----\n");

                    for(int i = 0; i < numb; i++)
                    {
                        printf("\nEmployee ID : %d", emp[i].empID);
                        printf("\nName        : %s", emp[i].name);
                        printf("\nSalary      : %.2f\n", emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("Thank you for using the Employee Management System.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 3);

    return 0;
}