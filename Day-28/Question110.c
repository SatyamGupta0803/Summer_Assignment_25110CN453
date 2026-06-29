//Bank Account System

struct bank
{
    char name[30];
    long int accountNO;
    float balance;
};

#include<stdio.h>

int main()
{
    struct bank b[100];

    int choice,numb;

    do
    {
        printf("\n===Bank Account System===");
        printf("\n1. Add Customer");
        printf("\n2. Display Details");
        printf("\n3. Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

            printf("\nENter no. of customer to add: ");
            scanf("%d",&numb);

            for(int i=0; i<numb; i++)
            {
                printf("\nEnter name: ");
                scanf("%s",b[i].name);

                printf("Enter Account Number: ");
                scanf("%ld",&b[i].accountNO);

                printf("Enter balance: ");
                scanf("%f",&b[i].balance);
            }

            printf("\nDetails Added Successfully\n");
            break;

            case 2:
            if(numb ==0)
            printf("\nNo Details available");

            else
            {
                for(int i=0; i<numb; i++)
                {
                    printf("Name: %s\nAccount Number: %ld\nBalance: %.2f\n",
                                   b[i].name,b[i].accountNO,b[i].balance);
                }
            }

            break;

            case 3:
            printf("\nThank you\n");
            break;

            default:
            printf("\nEnter valid choice");
        }

    } while (choice != 3);

    return 0;
    
}