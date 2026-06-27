// Employee Management System

struct employee
{
    int Id;
    char name[50];
    float salary;
};

#include<stdio.h>

int main()
{
    struct employee emp[100];
    int choice,numb;

    do
    {
        printf("---Employee Management System---\n");
        printf("1. Add Employees\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("\nEnter no. of employees to add: ");
            scanf("%d",&numb);

            //Loop to add employees;
            for(int i=0; i<numb; i++)
            {
                printf("Enter employee Id: ");
                scanf("%d",&emp[i].Id);

                printf("Enter Employee name: ");
                scanf("%s",emp[i].name);

                printf("Enter employee salary: ");
                scanf("%f",&emp[i].salary);
            }

            printf("Employee added successfully\n");
            break;

            case 2:
            //Loop to display employee

            for(int i=0; i<numb; i++)
            {
                printf("ID: %d\nName: %s\nSalary: %.2f\n",
                        emp[i].Id,emp[i].name,emp[i].salary);
            }
            break;

            case 3:
            printf("\nThank you\n");
            break;

            default :
            printf("Enter valid choice");

        }

    } while (choice !=3);

    return 0;
    
}
   