// Salary Management System

struct salary
{
    int empID;
    char name[50];
    float basic;
};

#include<stdio.h>

int main()
{
    struct salary s[100];

    float salary,hra,da;
    int numb,choice;

    do
    {
        printf("\n---Salary Management System---\n");
        printf("1. Details Salary calculations\n");
        printf("2. Display the details\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter number of Employee: ");
            scanf("%d",&numb);

            for(int i=0; i<numb; i++)
            {
                printf("Enter employee ID: ");
                scanf("%d",&s[i].empID);

                printf("Enter employee Name: ");
                scanf("%s",s[i].name);

                printf("Enter basic salary: ");
                scanf("%f",&s[i].basic);
            }

            // Salary calculations
            hra = s->basic * 0.2;  // 20% HRA;
            da = s->basic * 0.1;  // 10%DA;
            salary = s->basic+da+hra;

            printf("Details Added successfully\n");

            break;

            case 2:

            for(int i=0; i<numb; i++)
            {
                printf("\nName: %s\nEmployee ID: %d",s[i].name,s[i].empID);
                printf("\n---Salary Details---\n");
                printf("Basic Salary: %.2f",s->basic);
                printf("\nHRA: %.2f",hra);
                printf("\nD.A.: %.2f",da);
                printf("\nGross Salary: %.2f\n",salary);
            }
            break;

            case 3:
            printf("Thank you\n");
            break;

            default :
            printf("\nEnter valid choice\n");

        }

    } while (choice !=3);

    return 0;
    
}